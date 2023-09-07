#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 1
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_true = 1,
  anon_sym_false = 2,
  sym_number_literal = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_literal_token1 = 5,
  sym_comment = 6,
  sym_identifier = 7,
  anon_sym_SEMI = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_DOT = 16,
  anon_sym_If = 17,
  anon_sym_While = 18,
  anon_sym_ForeachTitan = 19,
  anon_sym_ForeachPlayer = 20,
  sym_source_file = 21,
  sym_boolean_literal = 22,
  sym_string_literal = 23,
  sym__literal = 24,
  sym_statement = 25,
  sym_compound_statement = 26,
  sym_parameter_list = 27,
  sym_event_definition = 28,
  sym_field_expression = 29,
  sym_expression = 30,
  sym_if_statement = 31,
  sym_while_statement = 32,
  sym_foreach_statement = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_string_literal_repeat1 = 35,
  aux_sym_compound_statement_repeat1 = 36,
  aux_sym_parameter_list_repeat1 = 37,
  alias_sym_condition_clause = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_If] = "If",
  [anon_sym_While] = "While",
  [anon_sym_ForeachTitan] = "ForeachTitan",
  [anon_sym_ForeachPlayer] = "ForeachPlayer",
  [sym_source_file] = "source_file",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym__literal] = "_literal",
  [sym_statement] = "statement",
  [sym_compound_statement] = "compound_statement",
  [sym_parameter_list] = "parameter_list",
  [sym_event_definition] = "event_definition",
  [sym_field_expression] = "field_expression",
  [sym_expression] = "expression",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_foreach_statement] = "foreach_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [alias_sym_condition_clause] = "condition_clause",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_If] = anon_sym_If,
  [anon_sym_While] = anon_sym_While,
  [anon_sym_ForeachTitan] = anon_sym_ForeachTitan,
  [anon_sym_ForeachPlayer] = anon_sym_ForeachPlayer,
  [sym_source_file] = sym_source_file,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__literal] = sym__literal,
  [sym_statement] = sym_statement,
  [sym_compound_statement] = sym_compound_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym_event_definition] = sym_event_definition,
  [sym_field_expression] = sym_field_expression,
  [sym_expression] = sym_expression,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_foreach_statement] = sym_foreach_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [alias_sym_condition_clause] = alias_sym_condition_clause,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_If] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_While] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForeachTitan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForeachPlayer] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_event_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_condition_clause] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_condition = 2,
  field_field_identifier = 3,
  field_function = 4,
  field_identifier = 5,
  field_parameters = 6,
  field_region_name = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_condition] = "condition",
  [field_field_identifier] = "field_identifier",
  [field_function] = "function",
  [field_identifier] = "identifier",
  [field_parameters] = "parameters",
  [field_region_name] = "region_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 4},
  [10] = {.index = 19, .length = 6},
  [11] = {.index = 25, .length = 2},
  [12] = {.index = 27, .length = 2},
  [13] = {.index = 29, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0},
  [1] =
    {field_body, 2},
    {field_identifier, 0},
    {field_parameters, 1},
  [4] =
    {field_function, 0},
    {field_parameters, 1},
  [6] =
    {field_value, 1, .inherited = true},
  [7] =
    {field_field_identifier, 2},
    {field_identifier, 0},
    {field_identifier, 1},
  [10] =
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [12] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [14] =
    {field_value, 2, .inherited = true},
  [15] =
    {field_field_identifier, 2},
    {field_field_identifier, 3},
    {field_function, 0},
    {field_parameters, 1},
  [19] =
    {field_body, 5},
    {field_identifier, 0},
    {field_parameters, 4},
    {field_region_name, 1},
    {field_region_name, 2},
    {field_region_name, 3},
  [25] =
    {field_body, 2},
    {field_condition, 1},
  [27] =
    {field_body, 3},
    {field_condition, 1},
  [29] =
    {field_body, 4},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [1] = alias_sym_condition_clause,
  },
  [12] = {
    [1] = alias_sym_condition_clause,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_parameter_list, 2,
    sym_parameter_list,
    alias_sym_condition_clause,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 4,
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
  [26] = 9,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 16,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(29);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(29);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_If);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_While);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ForeachTitan);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_ForeachPlayer);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_If] = ACTIONS(1),
    [anon_sym_While] = ACTIONS(1),
    [anon_sym_ForeachTitan] = ACTIONS(1),
    [anon_sym_ForeachPlayer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym_event_definition] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(12), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_If,
    ACTIONS(20), 1,
      anon_sym_While,
    STATE(59), 1,
      sym_field_expression,
    STATE(61), 1,
      sym_expression,
    ACTIONS(23), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(2), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(17), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [35] = 10,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      anon_sym_If,
    ACTIONS(34), 1,
      anon_sym_While,
    STATE(59), 1,
      sym_field_expression,
    STATE(61), 1,
      sym_expression,
    ACTIONS(36), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(2), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(17), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [70] = 10,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_If,
    ACTIONS(34), 1,
      anon_sym_While,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_field_expression,
    STATE(61), 1,
      sym_expression,
    ACTIONS(36), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(3), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(17), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [105] = 10,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_If,
    ACTIONS(34), 1,
      anon_sym_While,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_field_expression,
    STATE(61), 1,
      sym_expression,
    ACTIONS(36), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(2), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(17), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [140] = 10,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_If,
    ACTIONS(34), 1,
      anon_sym_While,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_field_expression,
    STATE(61), 1,
      sym_expression,
    ACTIONS(36), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(5), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(17), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [175] = 9,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(46), 1,
      sym_number_literal,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym__literal,
    STATE(36), 1,
      sym_expression,
    STATE(59), 1,
      sym_field_expression,
    ACTIONS(44), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_boolean_literal,
      sym_string_literal,
  [205] = 8,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(46), 1,
      sym_number_literal,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym__literal,
    STATE(56), 1,
      sym_expression,
    STATE(59), 1,
      sym_field_expression,
    ACTIONS(44), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_boolean_literal,
      sym_string_literal,
  [232] = 2,
    ACTIONS(52), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(54), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [244] = 2,
    ACTIONS(56), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(58), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [256] = 2,
    ACTIONS(60), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(62), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [268] = 2,
    ACTIONS(64), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(66), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [280] = 2,
    ACTIONS(68), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(70), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [292] = 2,
    ACTIONS(72), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(74), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [304] = 2,
    ACTIONS(76), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(78), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [316] = 2,
    ACTIONS(80), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(82), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [328] = 2,
    ACTIONS(84), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(86), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [340] = 1,
    ACTIONS(88), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [348] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym_comment,
    STATE(20), 2,
      sym_event_definition,
      aux_sym_source_file_repeat1,
  [362] = 4,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(20), 2,
      sym_event_definition,
      aux_sym_source_file_repeat1,
  [376] = 1,
    ACTIONS(102), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [384] = 1,
    ACTIONS(104), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [392] = 1,
    ACTIONS(106), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [400] = 1,
    ACTIONS(108), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [408] = 2,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(110), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [417] = 1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [423] = 1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [429] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_parameter_list_repeat1,
  [439] = 3,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym_string_literal_token1,
    STATE(43), 1,
      aux_sym_string_literal_repeat1,
  [449] = 3,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym_parameter_list,
  [459] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [465] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_parameter_list_repeat1,
  [475] = 1,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [481] = 1,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [487] = 3,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_parameter_list,
  [497] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_parameter_list_repeat1,
  [507] = 1,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [513] = 3,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_string_literal_token1,
    STATE(38), 1,
      aux_sym_string_literal_repeat1,
  [523] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_compound_statement,
  [533] = 3,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(34), 1,
      sym_expression,
    STATE(59), 1,
      sym_field_expression,
  [543] = 3,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_compound_statement,
  [553] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_parameter_list_repeat1,
  [563] = 3,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_string_literal_token1,
    STATE(38), 1,
      aux_sym_string_literal_repeat1,
  [573] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_parameter_list_repeat1,
  [583] = 1,
    ACTIONS(164), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [589] = 2,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_parameter_list,
  [596] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_compound_statement,
  [603] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [608] = 2,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_string_literal,
  [615] = 2,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_string_literal,
  [622] = 2,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_compound_statement,
  [629] = 1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [634] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [639] = 2,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_parameter_list,
  [646] = 2,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_parameter_list,
  [653] = 1,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [658] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_compound_statement,
  [665] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_compound_statement,
  [672] = 2,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parameter_list,
  [679] = 2,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_compound_statement,
  [686] = 1,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [690] = 1,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
  [694] = 1,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
  [698] = 1,
    ACTIONS(182), 1,
      sym_identifier,
  [702] = 1,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
  [706] = 1,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
  [710] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 244,
  [SMALL_STATE(11)] = 256,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 292,
  [SMALL_STATE(15)] = 304,
  [SMALL_STATE(16)] = 316,
  [SMALL_STATE(17)] = 328,
  [SMALL_STATE(18)] = 340,
  [SMALL_STATE(19)] = 348,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 392,
  [SMALL_STATE(24)] = 400,
  [SMALL_STATE(25)] = 408,
  [SMALL_STATE(26)] = 417,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 429,
  [SMALL_STATE(29)] = 439,
  [SMALL_STATE(30)] = 449,
  [SMALL_STATE(31)] = 459,
  [SMALL_STATE(32)] = 465,
  [SMALL_STATE(33)] = 475,
  [SMALL_STATE(34)] = 481,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 513,
  [SMALL_STATE(39)] = 523,
  [SMALL_STATE(40)] = 533,
  [SMALL_STATE(41)] = 543,
  [SMALL_STATE(42)] = 553,
  [SMALL_STATE(43)] = 563,
  [SMALL_STATE(44)] = 573,
  [SMALL_STATE(45)] = 583,
  [SMALL_STATE(46)] = 589,
  [SMALL_STATE(47)] = 596,
  [SMALL_STATE(48)] = 603,
  [SMALL_STATE(49)] = 608,
  [SMALL_STATE(50)] = 615,
  [SMALL_STATE(51)] = 622,
  [SMALL_STATE(52)] = 629,
  [SMALL_STATE(53)] = 634,
  [SMALL_STATE(54)] = 639,
  [SMALL_STATE(55)] = 646,
  [SMALL_STATE(56)] = 653,
  [SMALL_STATE(57)] = 658,
  [SMALL_STATE(58)] = 665,
  [SMALL_STATE(59)] = 672,
  [SMALL_STATE(60)] = 679,
  [SMALL_STATE(61)] = 686,
  [SMALL_STATE(62)] = 690,
  [SMALL_STATE(63)] = 694,
  [SMALL_STATE(64)] = 698,
  [SMALL_STATE(65)] = 702,
  [SMALL_STATE(66)] = 706,
  [SMALL_STATE(67)] = 710,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(61),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(55),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(54),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(63),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, .production_id = 12),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 11),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 11),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 11),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 11),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_statement, 5, .production_id = 13),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_statement, 5, .production_id = 13),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 8),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 3, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 6, .production_id = 10),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, .production_id = 9),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(8),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 7),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ls(void) {
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
