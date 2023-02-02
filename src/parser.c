#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  sym_comment = 1,
  anon_sym_snippet = 2,
  aux_sym_snippet_token1 = 3,
  aux_sym_snippet_token2 = 4,
  aux_sym_snippet_token3 = 5,
  anon_sym_LF = 6,
  anon_sym_BQUOTE = 7,
  anon_sym_BANG = 8,
  aux_sym_eval_token1 = 9,
  anon_sym_ = 10,
  aux_sym_eval_token2 = 11,
  sym_text = 12,
  anon_sym_DOLLAR = 13,
  aux_sym_insert_node_token1 = 14,
  anon_sym_DOLLAR_LBRACE = 15,
  anon_sym_COLON = 16,
  anon_sym_DOLLAR_LBRACEVISUAL_RBRACE = 17,
  aux_sym_default_node_token1 = 18,
  anon_sym_RBRACE = 19,
  anon_sym_PIPE = 20,
  aux_sym_choices_token1 = 21,
  anon_sym_COMMA = 22,
  aux_sym_function_node_token1 = 23,
  sym_snippets = 24,
  sym__node = 25,
  sym_snippet = 26,
  sym_snippet_body = 27,
  sym_eval = 28,
  sym_insert_node = 29,
  sym_default_node = 30,
  sym_choice_node = 31,
  sym_choices = 32,
  sym_function_node = 33,
  aux_sym_snippets_repeat1 = 34,
  aux_sym_snippet_body_repeat1 = 35,
  aux_sym_choices_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_snippet] = "snippet ",
  [aux_sym_snippet_token1] = "string",
  [aux_sym_snippet_token2] = "snippet_token2",
  [aux_sym_snippet_token3] = "string",
  [anon_sym_LF] = "\n",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_BANG] = "!",
  [aux_sym_eval_token1] = "string",
  [anon_sym_] = " ",
  [aux_sym_eval_token2] = "string",
  [sym_text] = "text",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_insert_node_token1] = "number",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_LBRACEVISUAL_RBRACE] = "string",
  [aux_sym_default_node_token1] = "string",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [aux_sym_choices_token1] = "string",
  [anon_sym_COMMA] = ",",
  [aux_sym_function_node_token1] = "string",
  [sym_snippets] = "snippets",
  [sym__node] = "_node",
  [sym_snippet] = "snippet",
  [sym_snippet_body] = "snippet_body",
  [sym_eval] = "eval",
  [sym_insert_node] = "insert_node",
  [sym_default_node] = "default_node",
  [sym_choice_node] = "choice_node",
  [sym_choices] = "choices",
  [sym_function_node] = "function_node",
  [aux_sym_snippets_repeat1] = "snippets_repeat1",
  [aux_sym_snippet_body_repeat1] = "snippet_body_repeat1",
  [aux_sym_choices_repeat1] = "choices_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_snippet] = anon_sym_snippet,
  [aux_sym_snippet_token1] = aux_sym_snippet_token1,
  [aux_sym_snippet_token2] = aux_sym_snippet_token2,
  [aux_sym_snippet_token3] = aux_sym_snippet_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_eval_token1] = aux_sym_snippet_token1,
  [anon_sym_] = anon_sym_,
  [aux_sym_eval_token2] = aux_sym_snippet_token1,
  [sym_text] = sym_text,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_insert_node_token1] = aux_sym_insert_node_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR_LBRACEVISUAL_RBRACE] = aux_sym_snippet_token1,
  [aux_sym_default_node_token1] = aux_sym_snippet_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_choices_token1] = aux_sym_snippet_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_function_node_token1] = aux_sym_snippet_token1,
  [sym_snippets] = sym_snippets,
  [sym__node] = sym__node,
  [sym_snippet] = sym_snippet,
  [sym_snippet_body] = sym_snippet_body,
  [sym_eval] = sym_eval,
  [sym_insert_node] = sym_insert_node,
  [sym_default_node] = sym_default_node,
  [sym_choice_node] = sym_choice_node,
  [sym_choices] = sym_choices,
  [sym_function_node] = sym_function_node,
  [aux_sym_snippets_repeat1] = aux_sym_snippets_repeat1,
  [aux_sym_snippet_body_repeat1] = aux_sym_snippet_body_repeat1,
  [aux_sym_choices_repeat1] = aux_sym_choices_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_snippet] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_snippet_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_snippet_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_snippet_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_eval_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_eval_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_insert_node_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACEVISUAL_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_default_node_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_choices_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_node_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_snippets] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_snippet] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet_body] = {
    .visible = true,
    .named = true,
  },
  [sym_eval] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_node] = {
    .visible = true,
    .named = true,
  },
  [sym_default_node] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_node] = {
    .visible = true,
    .named = true,
  },
  [sym_choices] = {
    .visible = true,
    .named = true,
  },
  [sym_function_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_snippets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_snippet_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choices_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_command = 2,
  field_content = 3,
  field_description = 4,
  field_index = 5,
  field_language = 6,
  field_trigger = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_command] = "command",
  [field_content] = "content",
  [field_description] = "description",
  [field_index] = "index",
  [field_language] = "language",
  [field_trigger] = "trigger",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_trigger, 1},
  [2] =
    {field_index, 1},
  [3] =
    {field_body, 5},
    {field_description, 3},
    {field_trigger, 1},
  [6] =
    {field_command, 1},
  [7] =
    {field_content, 2},
    {field_index, 1},
  [9] =
    {field_content, 3},
    {field_index, 1},
  [11] =
    {field_command, 4},
    {field_language, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_text);
      if (eof) ADVANCE(14);
      if (lookahead == '\t') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '`') ADVANCE(26);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r' ||
          lookahead == '$' ||
          lookahead == '`') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_snippet);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_snippet_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_snippet_token2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_snippet_token2);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(58);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_snippet_token2);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_snippet_token2);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_snippet_token2);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_snippet_token3);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_eval_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_eval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_eval_token2);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '`') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text);
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '`') ADVANCE(26);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(19);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_insert_node_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACEVISUAL_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead == 'I') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead == 'U') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_default_node_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_choices_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_function_node_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 41},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_snippet_token2] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_eval_token1] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_insert_node_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_snippets] = STATE(39),
    [sym__node] = STATE(12),
    [sym_snippet] = STATE(12),
    [aux_sym_snippets_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_snippet] = ACTIONS(9),
    [aux_sym_snippet_token2] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(18), 1,
      sym_text,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(24), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
    STATE(2), 6,
      sym_eval,
      sym_insert_node,
      sym_default_node,
      sym_choice_node,
      sym_function_node,
      aux_sym_snippet_body_repeat1,
  [29] = 7,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
    STATE(2), 6,
      sym_eval,
      sym_insert_node,
      sym_default_node,
      sym_choice_node,
      sym_function_node,
      aux_sym_snippet_body_repeat1,
  [58] = 7,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(37), 1,
      sym_text,
    STATE(17), 1,
      sym_snippet_body,
    STATE(3), 6,
      sym_eval,
      sym_insert_node,
      sym_default_node,
      sym_choice_node,
      sym_function_node,
      aux_sym_snippet_body_repeat1,
  [85] = 7,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(37), 1,
      sym_text,
    STATE(18), 1,
      sym_snippet_body,
    STATE(3), 6,
      sym_eval,
      sym_insert_node,
      sym_default_node,
      sym_choice_node,
      sym_function_node,
      aux_sym_snippet_body_repeat1,
  [112] = 3,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(41), 2,
      sym_text,
      anon_sym_DOLLAR,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [127] = 3,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(45), 2,
      sym_text,
      anon_sym_DOLLAR,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [142] = 3,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(49), 2,
      sym_text,
      anon_sym_DOLLAR,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [157] = 3,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(53), 2,
      sym_text,
      anon_sym_DOLLAR,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [172] = 3,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(57), 2,
      sym_text,
      anon_sym_DOLLAR,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [187] = 3,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(61), 2,
      sym_text,
      anon_sym_DOLLAR,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [202] = 5,
    ACTIONS(9), 1,
      anon_sym_snippet,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_comment,
    STATE(13), 3,
      sym__node,
      sym_snippet,
      aux_sym_snippets_repeat1,
  [220] = 5,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_snippet,
    STATE(13), 3,
      sym__node,
      sym_snippet,
      aux_sym_snippets_repeat1,
  [238] = 4,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_choices_repeat1,
  [251] = 4,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_choices_repeat1,
  [264] = 4,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_choices_repeat1,
  [277] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
  [286] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_snippet,
  [295] = 4,
    ACTIONS(3), 1,
      aux_sym_snippet_token2,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      aux_sym_function_node_token1,
  [308] = 3,
    ACTIONS(3), 1,
      aux_sym_snippet_token2,
    ACTIONS(96), 1,
      anon_sym_BANG,
    ACTIONS(98), 1,
      aux_sym_eval_token2,
  [318] = 3,
    ACTIONS(3), 1,
      aux_sym_snippet_token2,
    ACTIONS(100), 1,
      anon_sym_DOLLAR_LBRACEVISUAL_RBRACE,
    ACTIONS(102), 1,
      aux_sym_default_node_token1,
  [328] = 3,
    ACTIONS(3), 1,
      aux_sym_snippet_token2,
    ACTIONS(104), 1,
      aux_sym_choices_token1,
    STATE(31), 1,
      sym_choices,
  [338] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(75), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [346] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(106), 1,
      aux_sym_snippet_token1,
  [353] = 2,
    ACTIONS(3), 1,
      aux_sym_snippet_token2,
    ACTIONS(108), 1,
      anon_sym_,
  [360] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(110), 1,
      anon_sym_BQUOTE,
  [367] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [374] = 2,
    ACTIONS(3), 1,
      aux_sym_snippet_token2,
    ACTIONS(114), 1,
      aux_sym_eval_token2,
  [381] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
  [388] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(118), 1,
      aux_sym_eval_token1,
  [395] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
  [402] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(122), 1,
      aux_sym_insert_node_token1,
  [409] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(124), 1,
      anon_sym_BQUOTE,
  [416] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(126), 1,
      aux_sym_insert_node_token1,
  [423] = 2,
    ACTIONS(3), 1,
      aux_sym_snippet_token2,
    ACTIONS(128), 1,
      aux_sym_choices_token1,
  [430] = 2,
    ACTIONS(3), 1,
      aux_sym_snippet_token2,
    ACTIONS(130), 1,
      anon_sym_LF,
  [437] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(132), 1,
      aux_sym_snippet_token3,
  [444] = 2,
    ACTIONS(134), 1,
      aux_sym_snippet_token2,
    ACTIONS(136), 1,
      anon_sym_LF,
  [451] = 2,
    ACTIONS(11), 1,
      aux_sym_snippet_token2,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 238,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 286,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 318,
  [SMALL_STATE(22)] = 328,
  [SMALL_STATE(23)] = 338,
  [SMALL_STATE(24)] = 346,
  [SMALL_STATE(25)] = 353,
  [SMALL_STATE(26)] = 360,
  [SMALL_STATE(27)] = 367,
  [SMALL_STATE(28)] = 374,
  [SMALL_STATE(29)] = 381,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 395,
  [SMALL_STATE(32)] = 402,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 416,
  [SMALL_STATE(35)] = 423,
  [SMALL_STATE(36)] = 430,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 444,
  [SMALL_STATE(39)] = 451,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippets, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snippet_body_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snippet_body_repeat1, 2), SHIFT_REPEAT(20),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_body_repeat1, 2), SHIFT_REPEAT(2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_snippet_body_repeat1, 2), SHIFT_REPEAT(34),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snippet_body_repeat1, 2), SHIFT_REPEAT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet_body, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval, 6, .production_id = 7),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval, 6, .production_id = 7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_node, 5, .production_id = 6),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_node, 5, .production_id = 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_node, 5, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_node, 5, .production_id = 6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_node, 4, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_node, 4, .production_id = 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval, 3, .production_id = 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval, 3, .production_id = 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_node, 2, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insert_node, 2, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippets, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snippets_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snippets_repeat1, 2), SHIFT_REPEAT(13),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snippets_repeat1, 2), SHIFT_REPEAT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choices_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choices_repeat1, 2), SHIFT_REPEAT(35),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choices, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choices, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 4, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 6, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_snippets(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
