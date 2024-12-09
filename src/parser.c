#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  anon_sym_COMMA = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_dependency_token1 = 4,
  anon_sym_COLON = 5,
  anon_sym_version = 6,
  anon_sym_resolved = 7,
  aux_sym_resolved_token1 = 8,
  anon_sym_dependencies = 9,
  anon_sym_integrity = 10,
  aux_sym_integrity_token1 = 11,
  anon_sym_CARET = 12,
  anon_sym_TILDE = 13,
  anon_sym_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_GT = 16,
  aux_sym_semver_token1 = 17,
  anon_sym_DOT = 18,
  aux_sym_semver_token2 = 19,
  aux_sym_semver_token3 = 20,
  aux_sym_semver_token4 = 21,
  sym__indent = 22,
  sym__newline = 23,
  sym_identifier = 24,
  sym_comment = 25,
  sym_lock_file = 26,
  sym_dependency = 27,
  sym_dependency_body = 28,
  sym_version = 29,
  sym_resolved = 30,
  sym_dependencies = 31,
  sym_dependency_list = 32,
  sym_dependency_entry = 33,
  sym_integrity = 34,
  sym_semver = 35,
  aux_sym_lock_file_repeat1 = 36,
  aux_sym_dependency_repeat1 = 37,
  aux_sym_dependency_repeat2 = 38,
  aux_sym_dependency_body_repeat1 = 39,
  aux_sym_dependency_list_repeat1 = 40,
  alias_sym_minor = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_dependency_token1] = "url",
  [anon_sym_COLON] = ":",
  [anon_sym_version] = "version",
  [anon_sym_resolved] = "resolved",
  [aux_sym_resolved_token1] = "url",
  [anon_sym_dependencies] = "dependencies",
  [anon_sym_integrity] = "integrity",
  [aux_sym_integrity_token1] = "hash",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ] = "=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [aux_sym_semver_token1] = "major",
  [anon_sym_DOT] = ".",
  [aux_sym_semver_token2] = "patch",
  [aux_sym_semver_token3] = "semver_token3",
  [aux_sym_semver_token4] = "semver_token4",
  [sym__indent] = "_indent",
  [sym__newline] = "_newline",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_lock_file] = "lock_file",
  [sym_dependency] = "dependency",
  [sym_dependency_body] = "dependency_body",
  [sym_version] = "version",
  [sym_resolved] = "resolved",
  [sym_dependencies] = "dependencies",
  [sym_dependency_list] = "dependency_list",
  [sym_dependency_entry] = "dependency_entry",
  [sym_integrity] = "integrity",
  [sym_semver] = "semver",
  [aux_sym_lock_file_repeat1] = "lock_file_repeat1",
  [aux_sym_dependency_repeat1] = "dependency_repeat1",
  [aux_sym_dependency_repeat2] = "dependency_repeat2",
  [aux_sym_dependency_body_repeat1] = "dependency_body_repeat1",
  [aux_sym_dependency_list_repeat1] = "dependency_list_repeat1",
  [alias_sym_minor] = "minor",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_dependency_token1] = aux_sym_dependency_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_resolved] = anon_sym_resolved,
  [aux_sym_resolved_token1] = aux_sym_dependency_token1,
  [anon_sym_dependencies] = anon_sym_dependencies,
  [anon_sym_integrity] = anon_sym_integrity,
  [aux_sym_integrity_token1] = aux_sym_integrity_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_semver_token1] = aux_sym_semver_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_semver_token2] = aux_sym_semver_token2,
  [aux_sym_semver_token3] = aux_sym_semver_token3,
  [aux_sym_semver_token4] = aux_sym_semver_token4,
  [sym__indent] = sym__indent,
  [sym__newline] = sym__newline,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_lock_file] = sym_lock_file,
  [sym_dependency] = sym_dependency,
  [sym_dependency_body] = sym_dependency_body,
  [sym_version] = sym_version,
  [sym_resolved] = sym_resolved,
  [sym_dependencies] = sym_dependencies,
  [sym_dependency_list] = sym_dependency_list,
  [sym_dependency_entry] = sym_dependency_entry,
  [sym_integrity] = sym_integrity,
  [sym_semver] = sym_semver,
  [aux_sym_lock_file_repeat1] = aux_sym_lock_file_repeat1,
  [aux_sym_dependency_repeat1] = aux_sym_dependency_repeat1,
  [aux_sym_dependency_repeat2] = aux_sym_dependency_repeat2,
  [aux_sym_dependency_body_repeat1] = aux_sym_dependency_body_repeat1,
  [aux_sym_dependency_list_repeat1] = aux_sym_dependency_list_repeat1,
  [alias_sym_minor] = alias_sym_minor,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dependency_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resolved] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resolved_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dependencies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integrity] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integrity_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_semver_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_semver_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_semver_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_semver_token4] = {
    .visible = false,
    .named = false,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_lock_file] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_body] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_resolved] = {
    .visible = true,
    .named = true,
  },
  [sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_integrity] = {
    .visible = true,
    .named = true,
  },
  [sym_semver] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lock_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_minor] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_build = 1,
  field_name = 2,
  field_operator = 3,
  field_prerelease = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_build] = "build",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_prerelease] = "prerelease",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 0, .length = 1},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 3},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 2},
  [23] = {.index = 33, .length = 2},
  [24] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 2},
  [26] = {.index = 39, .length = 3},
  [27] = {.index = 42, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_prerelease, 1},
  [2] =
    {field_build, 1},
  [3] =
    {field_operator, 0},
    {field_prerelease, 2},
  [5] =
    {field_build, 2},
    {field_operator, 0},
  [7] =
    {field_build, 2},
    {field_prerelease, 1},
  [9] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [11] =
    {field_build, 3},
    {field_operator, 0},
    {field_prerelease, 2},
  [14] =
    {field_prerelease, 3},
  [15] =
    {field_build, 3},
  [16] =
    {field_operator, 0},
    {field_prerelease, 4},
  [18] =
    {field_build, 4},
    {field_operator, 0},
  [20] =
    {field_build, 4},
    {field_prerelease, 3},
  [22] =
    {field_name, 1},
  [23] =
    {field_name, 0},
  [24] =
    {field_build, 5},
    {field_operator, 0},
    {field_prerelease, 4},
  [27] =
    {field_prerelease, 5},
  [28] =
    {field_build, 5},
  [29] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
  [31] =
    {field_operator, 0},
    {field_prerelease, 6},
  [33] =
    {field_build, 6},
    {field_operator, 0},
  [35] =
    {field_build, 6},
    {field_prerelease, 5},
  [37] =
    {field_name, 1},
    {field_name, 5, .inherited = true},
  [39] =
    {field_build, 7},
    {field_operator, 0},
    {field_prerelease, 6},
  [42] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [2] = alias_sym_minor,
  },
  [9] = {
    [3] = alias_sym_minor,
  },
  [11] = {
    [2] = alias_sym_minor,
  },
  [12] = {
    [2] = alias_sym_minor,
  },
  [13] = {
    [3] = alias_sym_minor,
  },
  [14] = {
    [3] = alias_sym_minor,
  },
  [15] = {
    [2] = alias_sym_minor,
  },
  [18] = {
    [3] = alias_sym_minor,
  },
  [19] = {
    [2] = alias_sym_minor,
  },
  [20] = {
    [2] = alias_sym_minor,
  },
  [22] = {
    [3] = alias_sym_minor,
  },
  [23] = {
    [3] = alias_sym_minor,
  },
  [24] = {
    [2] = alias_sym_minor,
  },
  [26] = {
    [3] = alias_sym_minor,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '"', 51,
        '#', 99,
        '+', 41,
        ',', 50,
        '-', 42,
        '.', 72,
        ':', 55,
        '=', 68,
        '>', 70,
        '@', 49,
        '^', 66,
        'd', 12,
        'i', 25,
        'r', 13,
        'v', 14,
        'x', 73,
        '~', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '~') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '@') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(54);
      END_STATE();
    case 45:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '"', 51,
        '#', 99,
        '+', 41,
        ',', 50,
        '-', 42,
        ':', 55,
        '=', 68,
        '>', 70,
        '@', 49,
        '^', 66,
        'd', 12,
        'i', 25,
        'r', 13,
        'v', 14,
        'x', 73,
        '~', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '@') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_resolved);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead == '#') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_dependencies);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_integrity);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_integrity);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_integrity_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_semver_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_semver_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_semver_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_semver_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_semver_token4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 47},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_resolved] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [anon_sym_integrity] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_semver_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_semver_token2] = ACTIONS(1),
    [aux_sym_semver_token3] = ACTIONS(1),
    [aux_sym_semver_token4] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_lock_file] = STATE(117),
    [sym_dependency] = STATE(32),
    [aux_sym_lock_file_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_dependencies,
    ACTIONS(15), 1,
      anon_sym_integrity,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(3), 3,
      sym_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [24] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_dependencies,
    ACTIONS(15), 1,
      anon_sym_integrity,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(4), 3,
      sym_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [48] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(28), 1,
      anon_sym_dependencies,
    ACTIONS(31), 1,
      anon_sym_integrity,
    ACTIONS(34), 1,
      sym_identifier,
    STATE(4), 3,
      sym_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [72] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(122), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [91] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(52), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(113), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(69), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [148] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(76), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(83), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(96), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_dependencies,
      anon_sym_integrity,
    STATE(14), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(119), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(57), 2,
      anon_sym_dependencies,
      anon_sym_integrity,
    STATE(14), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      aux_sym_semver_token3,
    ACTIONS(68), 1,
      aux_sym_semver_token4,
    ACTIONS(62), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(74), 1,
      aux_sym_semver_token3,
    ACTIONS(76), 1,
      aux_sym_semver_token4,
    ACTIONS(70), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      aux_sym_semver_token3,
    ACTIONS(84), 1,
      aux_sym_semver_token4,
    ACTIONS(78), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      aux_sym_semver_token3,
    ACTIONS(92), 1,
      aux_sym_semver_token4,
    ACTIONS(86), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(96), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(100), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_semver_token3,
    ACTIONS(106), 1,
      aux_sym_semver_token4,
    ACTIONS(102), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_semver_token3,
    ACTIONS(112), 1,
      aux_sym_semver_token4,
    ACTIONS(108), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(116), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(120), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(124), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(27), 1,
      sym_dependency_list,
    STATE(12), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(132), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(30), 1,
      sym_dependency_list,
    STATE(12), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(29), 2,
      sym_dependency,
      aux_sym_lock_file_repeat1,
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(144), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(148), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_dependency,
      aux_sym_lock_file_repeat1,
  [540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_version,
    STATE(62), 1,
      sym_dependency_body,
    STATE(63), 1,
      sym_version,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym_semver_token4,
    ACTIONS(156), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [568] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_version,
    STATE(43), 1,
      sym_dependency_body,
    STATE(63), 1,
      sym_version,
  [584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_semver_token4,
    ACTIONS(160), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_semver_token4,
    ACTIONS(164), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_semver_token4,
    ACTIONS(168), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_semver_token4,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_semver_token4,
    ACTIONS(176), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_version,
    STATE(56), 1,
      sym_dependency_body,
    STATE(63), 1,
      sym_version,
  [660] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_version,
    STATE(54), 1,
      sym_dependency_body,
    STATE(63), 1,
      sym_version,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_COLON,
    STATE(51), 1,
      aux_sym_dependency_repeat2,
  [761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_COLON,
    STATE(53), 1,
      aux_sym_dependency_repeat1,
  [774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_COLON,
    STATE(58), 1,
      aux_sym_dependency_repeat1,
  [787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_COLON,
    STATE(58), 1,
      aux_sym_dependency_repeat1,
  [836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    STATE(51), 1,
      aux_sym_dependency_repeat2,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      anon_sym_resolved,
    STATE(2), 1,
      sym_resolved,
  [889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_COLON,
    STATE(60), 1,
      aux_sym_dependency_repeat2,
  [902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_dependencies,
    ACTIONS(240), 1,
      anon_sym_integrity,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_DQUOTE,
      anon_sym_resolved,
  [929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_DQUOTE,
      anon_sym_resolved,
  [953] = 2,
    ACTIONS(250), 1,
      sym__indent,
    ACTIONS(252), 1,
      sym_comment,
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_semver_token1,
  [967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_semver_token2,
  [974] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym_dependency_token1,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
  [1002] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_resolved_token1,
  [1009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_AT,
  [1016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [1023] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_integrity_token1,
  [1030] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__indent,
  [1037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
  [1044] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__newline,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym_semver_token1,
  [1058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_version,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
  [1079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
  [1086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
  [1093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
  [1100] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym__newline,
  [1107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
  [1114] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym__newline,
  [1121] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__newline,
  [1128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
  [1135] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_resolved_token1,
  [1142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_AT,
  [1149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COLON,
  [1156] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_integrity_token1,
  [1163] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__indent,
  [1170] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__newline,
  [1177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
  [1184] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__newline,
  [1191] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__indent,
  [1198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_AT,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_semver_token2,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_AT,
  [1219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_semver_token1,
  [1240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
  [1247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
  [1254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_resolved,
  [1268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [1282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
  [1289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
  [1296] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__indent,
  [1303] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__newline,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
  [1317] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_dependency_token1,
  [1324] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__newline,
  [1331] = 2,
    ACTIONS(252), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__indent,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 205,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 266,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 302,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 351,
  [SMALL_STATE(21)] = 364,
  [SMALL_STATE(22)] = 379,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 407,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 433,
  [SMALL_STATE(27)] = 450,
  [SMALL_STATE(28)] = 463,
  [SMALL_STATE(29)] = 480,
  [SMALL_STATE(30)] = 497,
  [SMALL_STATE(31)] = 510,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 540,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 568,
  [SMALL_STATE(36)] = 584,
  [SMALL_STATE(37)] = 596,
  [SMALL_STATE(38)] = 608,
  [SMALL_STATE(39)] = 620,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 644,
  [SMALL_STATE(42)] = 660,
  [SMALL_STATE(43)] = 676,
  [SMALL_STATE(44)] = 685,
  [SMALL_STATE(45)] = 694,
  [SMALL_STATE(46)] = 703,
  [SMALL_STATE(47)] = 712,
  [SMALL_STATE(48)] = 721,
  [SMALL_STATE(49)] = 730,
  [SMALL_STATE(50)] = 739,
  [SMALL_STATE(51)] = 748,
  [SMALL_STATE(52)] = 761,
  [SMALL_STATE(53)] = 774,
  [SMALL_STATE(54)] = 787,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 805,
  [SMALL_STATE(57)] = 814,
  [SMALL_STATE(58)] = 823,
  [SMALL_STATE(59)] = 836,
  [SMALL_STATE(60)] = 845,
  [SMALL_STATE(61)] = 858,
  [SMALL_STATE(62)] = 867,
  [SMALL_STATE(63)] = 876,
  [SMALL_STATE(64)] = 889,
  [SMALL_STATE(65)] = 902,
  [SMALL_STATE(66)] = 911,
  [SMALL_STATE(67)] = 921,
  [SMALL_STATE(68)] = 929,
  [SMALL_STATE(69)] = 937,
  [SMALL_STATE(70)] = 945,
  [SMALL_STATE(71)] = 953,
  [SMALL_STATE(72)] = 960,
  [SMALL_STATE(73)] = 967,
  [SMALL_STATE(74)] = 974,
  [SMALL_STATE(75)] = 981,
  [SMALL_STATE(76)] = 988,
  [SMALL_STATE(77)] = 995,
  [SMALL_STATE(78)] = 1002,
  [SMALL_STATE(79)] = 1009,
  [SMALL_STATE(80)] = 1016,
  [SMALL_STATE(81)] = 1023,
  [SMALL_STATE(82)] = 1030,
  [SMALL_STATE(83)] = 1037,
  [SMALL_STATE(84)] = 1044,
  [SMALL_STATE(85)] = 1051,
  [SMALL_STATE(86)] = 1058,
  [SMALL_STATE(87)] = 1065,
  [SMALL_STATE(88)] = 1072,
  [SMALL_STATE(89)] = 1079,
  [SMALL_STATE(90)] = 1086,
  [SMALL_STATE(91)] = 1093,
  [SMALL_STATE(92)] = 1100,
  [SMALL_STATE(93)] = 1107,
  [SMALL_STATE(94)] = 1114,
  [SMALL_STATE(95)] = 1121,
  [SMALL_STATE(96)] = 1128,
  [SMALL_STATE(97)] = 1135,
  [SMALL_STATE(98)] = 1142,
  [SMALL_STATE(99)] = 1149,
  [SMALL_STATE(100)] = 1156,
  [SMALL_STATE(101)] = 1163,
  [SMALL_STATE(102)] = 1170,
  [SMALL_STATE(103)] = 1177,
  [SMALL_STATE(104)] = 1184,
  [SMALL_STATE(105)] = 1191,
  [SMALL_STATE(106)] = 1198,
  [SMALL_STATE(107)] = 1205,
  [SMALL_STATE(108)] = 1212,
  [SMALL_STATE(109)] = 1219,
  [SMALL_STATE(110)] = 1226,
  [SMALL_STATE(111)] = 1233,
  [SMALL_STATE(112)] = 1240,
  [SMALL_STATE(113)] = 1247,
  [SMALL_STATE(114)] = 1254,
  [SMALL_STATE(115)] = 1261,
  [SMALL_STATE(116)] = 1268,
  [SMALL_STATE(117)] = 1275,
  [SMALL_STATE(118)] = 1282,
  [SMALL_STATE(119)] = 1289,
  [SMALL_STATE(120)] = 1296,
  [SMALL_STATE(121)] = 1303,
  [SMALL_STATE(122)] = 1310,
  [SMALL_STATE(123)] = 1317,
  [SMALL_STATE(124)] = 1324,
  [SMALL_STATE(125)] = 1331,
  [SMALL_STATE(126)] = 1338,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dependency_list, 1, 0, 0), SHIFT(109),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_dependency_list, 1, 0, 0), SHIFT(110),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 9),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolved, 6, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolved, 6, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 7, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 7, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 9),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integrity, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integrity, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolved, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolved, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integrity, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integrity, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 7, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 7, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 5, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 5, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_file, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 19),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 22),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 13),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 11),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 10, 0, 25),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 20),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 23),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 24),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 12),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 8, 0, 26),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 2, 0, 8), SHIFT_REPEAT(93),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 2, 0, 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 9, 0, 16),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 14),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 8, 0, 21),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 7),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2, 0, 8), SHIFT_REPEAT(126),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2, 0, 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 15),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 10),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 7, 0, 17),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 18),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 6, 0, 27),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 4, 0, 16),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [344] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_yarnlock(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
