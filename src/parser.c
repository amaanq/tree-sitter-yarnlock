#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  anon_sym_DQUOTE = 1,
  anon_sym_AT = 2,
  anon_sym_COMMA = 3,
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
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [25] = {.index = 37, .length = 1},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 3},
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
    {field_name, 2},
  [38] =
    {field_name, 1},
    {field_name, 5, .inherited = true},
  [40] =
    {field_build, 7},
    {field_operator, 0},
    {field_prerelease, 6},
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
  [27] = {
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
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '"', 50,
        '#', 101,
        '+', 43,
        ',', 52,
        '-', 44,
        '.', 74,
        ':', 57,
        '=', 70,
        '>', 72,
        '@', 51,
        '^', 68,
        'd', 12,
        'i', 25,
        'r', 13,
        'v', 14,
        'x', 75,
        '~', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '#') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '^') ADVANCE(68);
      if (lookahead == '~') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '@') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(59);
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
      if (lookahead == 'n') ADVANCE(58);
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
      if (lookahead == 's') ADVANCE(63);
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
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 41:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 42:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(78);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 46:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '"', 50,
        '#', 101,
        '+', 43,
        ',', 52,
        '-', 44,
        ':', 57,
        '=', 70,
        '>', 72,
        '@', 51,
        '^', 68,
        'd', 12,
        'i', 25,
        'r', 13,
        'v', 14,
        'x', 75,
        '~', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '@') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '@') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_resolved);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead == '#') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_dependencies);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_integrity);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_integrity);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_integrity_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_semver_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_semver_token2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_semver_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_semver_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_semver_token4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(90);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(95);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(97);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(85);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(98);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(86);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(64);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(66);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 48},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 48},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 48},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 48},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_lock_file] = STATE(87),
    [sym_dependency] = STATE(22),
    [aux_sym_lock_file_repeat1] = STATE(22),
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
    STATE(4), 3,
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
    STATE(2), 3,
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
    STATE(136), 1,
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
    STATE(59), 1,
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
    STATE(94), 1,
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
    STATE(77), 1,
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
    STATE(58), 1,
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
    STATE(79), 1,
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
    STATE(89), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(110), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [224] = 5,
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
  [243] = 6,
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
    STATE(16), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_GT,
    ACTIONS(40), 1,
      aux_sym_semver_token1,
    STATE(133), 1,
      sym_semver,
    ACTIONS(36), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [283] = 6,
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
    STATE(16), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      aux_sym_semver_token3,
    ACTIONS(68), 1,
      aux_sym_semver_token4,
    ACTIONS(62), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [322] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(74), 1,
      aux_sym_semver_token3,
    ACTIONS(76), 1,
      aux_sym_semver_token4,
    ACTIONS(70), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      aux_sym_semver_token3,
    ACTIONS(84), 1,
      aux_sym_semver_token4,
    ACTIONS(78), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      aux_sym_semver_token3,
    ACTIONS(92), 1,
      aux_sym_semver_token4,
    ACTIONS(86), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(29), 1,
      sym_dependency_list,
    STATE(14), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_dependency,
      aux_sym_lock_file_repeat1,
  [410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_semver_token3,
    ACTIONS(104), 1,
      aux_sym_semver_token4,
    ACTIONS(100), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(108), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(112), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(116), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(27), 2,
      sym_dependency,
      aux_sym_lock_file_repeat1,
  [481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(128), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(132), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_semver_token3,
    ACTIONS(138), 1,
      aux_sym_semver_token4,
    ACTIONS(134), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(32), 1,
      sym_dependency_list,
    STATE(14), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(142), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(146), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(150), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_semver_token4,
    ACTIONS(152), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_version,
    STATE(50), 1,
      sym_dependency_body,
    STATE(51), 1,
      sym_version,
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_semver_token4,
    ACTIONS(160), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_version,
    STATE(51), 1,
      sym_version,
    STATE(64), 1,
      sym_dependency_body,
  [634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_semver_token4,
    ACTIONS(164), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_semver_token4,
    ACTIONS(168), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_version,
    STATE(51), 1,
      sym_version,
    STATE(63), 1,
      sym_dependency_body,
  [674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_version,
    STATE(51), 1,
      sym_version,
    STATE(57), 1,
      sym_dependency_body,
  [690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_semver_token4,
    ACTIONS(172), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_version,
    STATE(46), 1,
      sym_dependency_body,
    STATE(51), 1,
      sym_version,
  [718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_semver_token4,
    ACTIONS(176), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_dependency_repeat2,
  [752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_resolved,
    STATE(3), 1,
      sym_resolved,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_COLON,
    STATE(66), 1,
      aux_sym_dependency_repeat1,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_COLON,
    STATE(67), 1,
      aux_sym_dependency_repeat2,
  [845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_COLON,
    STATE(68), 1,
      aux_sym_dependency_repeat1,
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_COLON,
    STATE(55), 1,
      aux_sym_dependency_repeat1,
  [880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_COLON,
    STATE(66), 1,
      aux_sym_dependency_repeat1,
  [947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_dependency_repeat2,
  [960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_COLON,
    STATE(66), 1,
      aux_sym_dependency_repeat1,
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_DQUOTE,
      anon_sym_resolved,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_DQUOTE,
      anon_sym_resolved,
  [1024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_dependencies,
    ACTIONS(248), 1,
      anon_sym_integrity,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_identifier,
  [1044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1052] = 3,
    ACTIONS(256), 1,
      aux_sym_dependency_token1,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_comment,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1070] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_integrity_token1,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_semver_token1,
  [1084] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__newline,
  [1091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_semver_token2,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_AT,
  [1105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_semver_token1,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_AT,
  [1119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
  [1133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
  [1140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
  [1147] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_resolved_token1,
  [1154] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__indent,
  [1161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [1168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
  [1175] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym__indent,
  [1182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
  [1189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
  [1196] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__indent,
  [1203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_AT,
  [1210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_identifier,
  [1217] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__newline,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
  [1231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
  [1238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
  [1252] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__newline,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_AT,
  [1266] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__indent,
  [1273] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym__newline,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
  [1287] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_resolved_token1,
  [1294] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__newline,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COLON,
  [1308] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_integrity_token1,
  [1315] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__indent,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
  [1336] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__newline,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_AT,
  [1350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
  [1357] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__newline,
  [1364] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__indent,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_identifier,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_resolved,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_semver_token1,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
  [1413] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_dependency_token1,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_semver_token2,
  [1427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_AT,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_version,
  [1455] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__newline,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
  [1476] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym__newline,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
  [1490] = 2,
    ACTIONS(260), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__indent,
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
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 322,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 393,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 425,
  [SMALL_STATE(25)] = 438,
  [SMALL_STATE(26)] = 451,
  [SMALL_STATE(27)] = 464,
  [SMALL_STATE(28)] = 481,
  [SMALL_STATE(29)] = 494,
  [SMALL_STATE(30)] = 507,
  [SMALL_STATE(31)] = 522,
  [SMALL_STATE(32)] = 539,
  [SMALL_STATE(33)] = 552,
  [SMALL_STATE(34)] = 565,
  [SMALL_STATE(35)] = 578,
  [SMALL_STATE(36)] = 590,
  [SMALL_STATE(37)] = 606,
  [SMALL_STATE(38)] = 618,
  [SMALL_STATE(39)] = 634,
  [SMALL_STATE(40)] = 646,
  [SMALL_STATE(41)] = 658,
  [SMALL_STATE(42)] = 674,
  [SMALL_STATE(43)] = 690,
  [SMALL_STATE(44)] = 702,
  [SMALL_STATE(45)] = 718,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 739,
  [SMALL_STATE(48)] = 752,
  [SMALL_STATE(49)] = 761,
  [SMALL_STATE(50)] = 770,
  [SMALL_STATE(51)] = 779,
  [SMALL_STATE(52)] = 792,
  [SMALL_STATE(53)] = 801,
  [SMALL_STATE(54)] = 810,
  [SMALL_STATE(55)] = 819,
  [SMALL_STATE(56)] = 832,
  [SMALL_STATE(57)] = 845,
  [SMALL_STATE(58)] = 854,
  [SMALL_STATE(59)] = 867,
  [SMALL_STATE(60)] = 880,
  [SMALL_STATE(61)] = 889,
  [SMALL_STATE(62)] = 898,
  [SMALL_STATE(63)] = 907,
  [SMALL_STATE(64)] = 916,
  [SMALL_STATE(65)] = 925,
  [SMALL_STATE(66)] = 934,
  [SMALL_STATE(67)] = 947,
  [SMALL_STATE(68)] = 960,
  [SMALL_STATE(69)] = 973,
  [SMALL_STATE(70)] = 982,
  [SMALL_STATE(71)] = 991,
  [SMALL_STATE(72)] = 1000,
  [SMALL_STATE(73)] = 1008,
  [SMALL_STATE(74)] = 1016,
  [SMALL_STATE(75)] = 1024,
  [SMALL_STATE(76)] = 1034,
  [SMALL_STATE(77)] = 1044,
  [SMALL_STATE(78)] = 1052,
  [SMALL_STATE(79)] = 1062,
  [SMALL_STATE(80)] = 1070,
  [SMALL_STATE(81)] = 1077,
  [SMALL_STATE(82)] = 1084,
  [SMALL_STATE(83)] = 1091,
  [SMALL_STATE(84)] = 1098,
  [SMALL_STATE(85)] = 1105,
  [SMALL_STATE(86)] = 1112,
  [SMALL_STATE(87)] = 1119,
  [SMALL_STATE(88)] = 1126,
  [SMALL_STATE(89)] = 1133,
  [SMALL_STATE(90)] = 1140,
  [SMALL_STATE(91)] = 1147,
  [SMALL_STATE(92)] = 1154,
  [SMALL_STATE(93)] = 1161,
  [SMALL_STATE(94)] = 1168,
  [SMALL_STATE(95)] = 1175,
  [SMALL_STATE(96)] = 1182,
  [SMALL_STATE(97)] = 1189,
  [SMALL_STATE(98)] = 1196,
  [SMALL_STATE(99)] = 1203,
  [SMALL_STATE(100)] = 1210,
  [SMALL_STATE(101)] = 1217,
  [SMALL_STATE(102)] = 1224,
  [SMALL_STATE(103)] = 1231,
  [SMALL_STATE(104)] = 1238,
  [SMALL_STATE(105)] = 1245,
  [SMALL_STATE(106)] = 1252,
  [SMALL_STATE(107)] = 1259,
  [SMALL_STATE(108)] = 1266,
  [SMALL_STATE(109)] = 1273,
  [SMALL_STATE(110)] = 1280,
  [SMALL_STATE(111)] = 1287,
  [SMALL_STATE(112)] = 1294,
  [SMALL_STATE(113)] = 1301,
  [SMALL_STATE(114)] = 1308,
  [SMALL_STATE(115)] = 1315,
  [SMALL_STATE(116)] = 1322,
  [SMALL_STATE(117)] = 1329,
  [SMALL_STATE(118)] = 1336,
  [SMALL_STATE(119)] = 1343,
  [SMALL_STATE(120)] = 1350,
  [SMALL_STATE(121)] = 1357,
  [SMALL_STATE(122)] = 1364,
  [SMALL_STATE(123)] = 1371,
  [SMALL_STATE(124)] = 1378,
  [SMALL_STATE(125)] = 1385,
  [SMALL_STATE(126)] = 1392,
  [SMALL_STATE(127)] = 1399,
  [SMALL_STATE(128)] = 1406,
  [SMALL_STATE(129)] = 1413,
  [SMALL_STATE(130)] = 1420,
  [SMALL_STATE(131)] = 1427,
  [SMALL_STATE(132)] = 1434,
  [SMALL_STATE(133)] = 1441,
  [SMALL_STATE(134)] = 1448,
  [SMALL_STATE(135)] = 1455,
  [SMALL_STATE(136)] = 1462,
  [SMALL_STATE(137)] = 1469,
  [SMALL_STATE(138)] = 1476,
  [SMALL_STATE(139)] = 1483,
  [SMALL_STATE(140)] = 1490,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 3, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dependency_list, 1, 0, 0), SHIFT(123),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_dependency_list, 1, 0, 0), SHIFT(124),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 9),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_file, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integrity, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integrity, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolved, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolved, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integrity, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integrity, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolved, 6, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolved, 6, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 9),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 7, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 7, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 5, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 5, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 7, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 7, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 11),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 22),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 13),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 19),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 9, 0, 16),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 2, 0, 8), SHIFT_REPEAT(120),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 2, 0, 8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 14),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 15),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 7, 0, 17),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 18),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 20),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 8, 0, 21),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 24),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 7),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 10, 0, 26),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 8, 0, 27),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2, 0, 8), SHIFT_REPEAT(76),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2, 0, 8),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 10),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 12),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 6, 0, 25),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 4, 0, 16),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 6, 0, 25),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [278] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
