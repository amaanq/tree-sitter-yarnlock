/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "yarnlock",

  conflicts: $ => [
    [$.dependency_list],
  ],

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    // TODO: add the actual grammar rules
    lock_file: $ => repeat1($.dependency),

    dependency: $ => seq(
      choice(
        commaSep1(seq(field('name', $.identifier), '@', $.semver)),
        commaSep1(seq(
          '"',
          field(
            'name',
            alias(/@?[^@]+/, $.url),
          ),
          '@',
          $.semver,
          '"'
        )),
      ),
      ':',
      $._newline,
      $._indent,
      $.dependency_body,
    ),

    dependency_body: $ => seq(
      $.version,
      $.resolved,
      repeat(choice($.dependencies, $.integrity)),
    ),

    version: $ => seq('version', '"', $.semver, '"'),

    resolved: $ => seq('resolved', '"', alias(/[^"]+/, $.url), '"'),

    dependencies: $ => seq(
      'dependencies',
      ':',
      $._newline,
      $._indent,
      $.dependency_list,
    ),

    dependency_list: $ => repeat1($.dependency_entry),

    dependency_entry: $ => seq($.identifier, '"', $.semver, '"', $._newline),

    integrity: $ => seq('integrity', alias(/[^\s].+/, $.hash)),

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

    _indent: _ => /  /,

    _newline: _ => /\r?\n/,

    identifier: _ => /[.a-zA-Z0-9_-]+/,

    comment: _ => token(seq('#', /.*/)),
  }
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
*
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
