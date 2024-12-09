/**
 * @file Yarnlock grammar for tree-sitter
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'yarnlock',

  conflicts: $ => [
    [$.dependency_body],
  ],

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    // TODO: add the actual grammar rules
    lock_file: $ => repeat1($.dependency),

    dependency: $ => seq(
      commaSep1(choice(
        seq(
          field('name', $.identifier),
          '@',
          choice(
            $.semver,
            alias(token(prec(-1, /(file:)?[^"\s:]+/)), $.remote_url),
          ),
        ),
        seq(
          '"',
          field(
            'name',
            alias(/@?[^@"\s]+/, $.url),
          ),
          '@',
          choice(
            $.semver,
            alias(token(prec(-1, /[^"\s]+/)), $.remote_url),
          ),
          '"',
        )),
      ),
      ':',
      $._newline,
      $._indent,
      $.dependency_body,
    ),

    dependency_body: $ => seq(
      $.version,
      optional($.resolved),
      repeat(choice($.dependencies, $.optional_dependencies, $.integrity)),
    ),

    version: $ => seq(
      choice('version', seq('"', 'version', '"')),
      '"',
      $.semver,
      '"',
    ),

    resolved: $ => seq(
      choice('resolved', seq('"', 'resolved', '"')),
      '"',
      alias(/[^"\s]+/, $.url),
      '"',
    ),

    dependencies: $ => seq(
      choice('dependencies', seq('"', 'dependencies', '"')),
      ':',
      $._newline,
      $._indent,
      $.dependency_list,
    ),

    optional_dependencies: $ => seq(
      choice('optionalDependencies', seq('"', 'optionalDependencies', '"')),
      ':',
      $._newline,
      $._indent,
      $.dependency_list,
    ),

    dependency_list: $ => repeat1($.dependency_entry),

    dependency_entry: $ => seq(
      $._indent,
      choice(
        $.identifier,
        seq('"', field('name', alias(/@?[^@"\s]+/, $.url)), '"'),
      ),
      choice(
        seq('"', $.semver, '"'),
        alias(token(prec(-1, /[^"\s]+/)), $.remote_url),
        seq('"', alias(token(prec(-1, /[^"\s]+/)), $.remote_url), '"'),
      ),
      $._newline,
    ),

    integrity: $ => seq(
      choice('integrity', seq('"', 'integrity', '"')),
      alias(/[^\s].+/, $.hash),
    ),

    semver: $ => seq(
      optional(field('operator', choice('^', '~', '=', '>=', '>'))),
      alias(/[0-9]+/, $.major),
      optional(seq(
        token.immediate('.'),
        alias(/[0-9]+/, $.minor),
        optional(seq(
          token.immediate('.'),
          alias(/(x|[0-9]+)/, $.patch),
        )),
      )),
      optional(field('prerelease', /\-[^:"\s]+/)),
      optional(field('build', /\+[^:"\s]+/)),
    ),

    _indent: _ => token.immediate(/  /),

    _newline: _ => /\r?\n/,

    identifier: _ => /[.a-zA-Z0-9_-]+/,

    comment: _ => token(seq('#', /.*/)),
  },
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @returns {SeqRule}
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
