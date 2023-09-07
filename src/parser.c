#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 1
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_true = 1,
  anon_sym_false = 2,
  sym_number_literal = 3,
  sym_string_literal = 4,
  sym_comment = 5,
  sym_identifier = 6,
  anon_sym_SEMI = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_DOT = 15,
  anon_sym_If = 16,
  anon_sym_While = 17,
  anon_sym_ForeachTitan = 18,
  anon_sym_ForeachPlayer = 19,
  sym_source_file = 20,
  sym_boolean_literal = 21,
  sym__literal = 22,
  sym_statement = 23,
  sym_compound_statement = 24,
  sym_parameter_list = 25,
  sym_event_definition = 26,
  sym_field_expression = 27,
  sym_expression = 28,
  sym_if_statement = 29,
  sym_while_statement = 30,
  sym_foreach_statement = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_compound_statement_repeat1 = 33,
  aux_sym_parameter_list_repeat1 = 34,
  alias_sym_condition_clause = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
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
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [alias_sym_condition_clause] = "condition_clause",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number_literal] = sym_number_literal,
  [sym_string_literal] = sym_string_literal,
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
  [sym_string_literal] = {
    .visible = true,
    .named = true,
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
  [9] = {.index = 15, .length = 6},
  [10] = {.index = 21, .length = 2},
  [11] = {.index = 23, .length = 2},
  [12] = {.index = 25, .length = 2},
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
    {field_body, 5},
    {field_identifier, 0},
    {field_parameters, 4},
    {field_region_name, 1},
    {field_region_name, 2},
    {field_region_name, 3},
  [21] =
    {field_body, 2},
    {field_condition, 1},
  [23] =
    {field_body, 2},
    {field_identifier, 1},
  [25] =
    {field_body, 3},
    {field_condition, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [1] = alias_sym_condition_clause,
  },
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
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
  [27] = 13,
  [28] = 17,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(27);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(27);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(14);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
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
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_If);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_While);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ForeachTitan);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ForeachPlayer);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
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
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
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
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
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
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
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
    [sym_source_file] = STATE(55),
    [sym_event_definition] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_If,
    ACTIONS(17), 1,
      anon_sym_While,
    STATE(40), 1,
      sym_field_expression,
    STATE(43), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(4), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(12), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [35] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_If,
    ACTIONS(17), 1,
      anon_sym_While,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_field_expression,
    STATE(43), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(4), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(12), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [70] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(26), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_If,
    ACTIONS(34), 1,
      anon_sym_While,
    STATE(40), 1,
      sym_field_expression,
    STATE(43), 1,
      sym_expression,
    ACTIONS(37), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(4), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(12), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [105] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_If,
    ACTIONS(17), 1,
      anon_sym_While,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_field_expression,
    STATE(43), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(3), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(12), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [140] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_If,
    ACTIONS(17), 1,
      anon_sym_While,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_field_expression,
    STATE(43), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
    STATE(2), 2,
      sym_statement,
      aux_sym_compound_statement_repeat1,
    STATE(12), 3,
      sym_if_statement,
      sym_while_statement,
      sym_foreach_statement,
  [175] = 8,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_expression,
    STATE(30), 1,
      sym__literal,
    STATE(40), 1,
      sym_field_expression,
    STATE(51), 1,
      sym_boolean_literal,
    ACTIONS(44), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 2,
      sym_number_literal,
      sym_string_literal,
  [202] = 7,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(33), 1,
      sym_expression,
    STATE(40), 1,
      sym_field_expression,
    STATE(45), 1,
      sym__literal,
    STATE(51), 1,
      sym_boolean_literal,
    ACTIONS(44), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 2,
      sym_number_literal,
      sym_string_literal,
  [226] = 2,
    ACTIONS(50), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(52), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [238] = 2,
    ACTIONS(54), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(56), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [250] = 2,
    ACTIONS(58), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(60), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [262] = 2,
    ACTIONS(62), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(64), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [274] = 2,
    ACTIONS(66), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(68), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [286] = 2,
    ACTIONS(70), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(72), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [298] = 2,
    ACTIONS(74), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(76), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [310] = 2,
    ACTIONS(78), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(80), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [322] = 2,
    ACTIONS(82), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(84), 5,
      sym_identifier,
      anon_sym_If,
      anon_sym_While,
      anon_sym_ForeachTitan,
      anon_sym_ForeachPlayer,
  [334] = 1,
    ACTIONS(86), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [342] = 4,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(19), 2,
      sym_event_definition,
      aux_sym_source_file_repeat1,
  [356] = 1,
    ACTIONS(96), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [364] = 1,
    ACTIONS(98), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [372] = 1,
    ACTIONS(100), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [380] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_comment,
    STATE(19), 2,
      sym_event_definition,
      aux_sym_source_file_repeat1,
  [394] = 1,
    ACTIONS(106), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [402] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [415] = 1,
    ACTIONS(114), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [422] = 1,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [428] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [434] = 1,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [440] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_parameter_list_repeat1,
  [450] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_parameter_list_repeat1,
  [460] = 3,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_parameter_list,
  [470] = 2,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [478] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_parameter_list_repeat1,
  [488] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_parameter_list_repeat1,
  [498] = 1,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [504] = 3,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parameter_list,
  [514] = 3,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_compound_statement,
  [524] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_compound_statement,
  [534] = 2,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parameter_list,
  [541] = 2,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_compound_statement,
  [548] = 2,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_parameter_list,
  [555] = 2,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [562] = 2,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_compound_statement,
  [569] = 1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [574] = 2,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_parameter_list,
  [581] = 2,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_compound_statement,
  [588] = 2,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_parameter_list,
  [595] = 2,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_compound_statement,
  [602] = 2,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_parameter_list,
  [609] = 1,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [614] = 1,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [619] = 2,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_compound_statement,
  [626] = 1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
  [630] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [634] = 1,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [638] = 1,
    ACTIONS(157), 1,
      sym_identifier,
  [642] = 1,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
  [646] = 1,
    ACTIONS(161), 1,
      sym_string_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 286,
  [SMALL_STATE(15)] = 298,
  [SMALL_STATE(16)] = 310,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 334,
  [SMALL_STATE(19)] = 342,
  [SMALL_STATE(20)] = 356,
  [SMALL_STATE(21)] = 364,
  [SMALL_STATE(22)] = 372,
  [SMALL_STATE(23)] = 380,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 402,
  [SMALL_STATE(26)] = 415,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 428,
  [SMALL_STATE(29)] = 434,
  [SMALL_STATE(30)] = 440,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 460,
  [SMALL_STATE(33)] = 470,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 488,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 504,
  [SMALL_STATE(38)] = 514,
  [SMALL_STATE(39)] = 524,
  [SMALL_STATE(40)] = 534,
  [SMALL_STATE(41)] = 541,
  [SMALL_STATE(42)] = 548,
  [SMALL_STATE(43)] = 555,
  [SMALL_STATE(44)] = 562,
  [SMALL_STATE(45)] = 569,
  [SMALL_STATE(46)] = 574,
  [SMALL_STATE(47)] = 581,
  [SMALL_STATE(48)] = 588,
  [SMALL_STATE(49)] = 595,
  [SMALL_STATE(50)] = 602,
  [SMALL_STATE(51)] = 609,
  [SMALL_STATE(52)] = 614,
  [SMALL_STATE(53)] = 619,
  [SMALL_STATE(54)] = 626,
  [SMALL_STATE(55)] = 630,
  [SMALL_STATE(56)] = 634,
  [SMALL_STATE(57)] = 638,
  [SMALL_STATE(58)] = 642,
  [SMALL_STATE(59)] = 646,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(56),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(48),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(46),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(42),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, .production_id = 12),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 12),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_statement, 3, .production_id = 11),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_statement, 3, .production_id = 11),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 10),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 10),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 8),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 6, .production_id = 9),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 7), SHIFT_REPEAT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 3, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
