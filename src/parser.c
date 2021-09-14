#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_code_token1 = 1,
  aux_sym_content_token1 = 2,
  anon_sym_LBRACE_PERCENT = 3,
  anon_sym_LBRACE_PERCENT_DASH = 4,
  anon_sym_LBRACE_PERCENT_TILDE = 5,
  anon_sym_PERCENT_RBRACE = 6,
  anon_sym_DASH_PERCENT_RBRACE = 7,
  anon_sym_TILDE_PERCENT_RBRACE = 8,
  anon_sym_LBRACE_LBRACE = 9,
  anon_sym_LBRACE_LBRACE_DASH = 10,
  anon_sym_LBRACE_LBRACE_TILDE = 11,
  anon_sym_RBRACE_RBRACE = 12,
  anon_sym_DASH_RBRACE_RBRACE = 13,
  anon_sym_TILDE_RBRACE_RBRACE = 14,
  anon_sym_LBRACE_POUND = 15,
  aux_sym_comment_directive_token1 = 16,
  anon_sym_RBRACE = 17,
  sym_template = 18,
  sym_code = 19,
  sym_content = 20,
  sym_directive = 21,
  sym_output_directive = 22,
  sym_comment_directive = 23,
  aux_sym_template_repeat1 = 24,
  aux_sym_code_repeat1 = 25,
  aux_sym_content_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_LBRACE_PERCENT_TILDE] = "{%~",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_TILDE_PERCENT_RBRACE] = "~%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_LBRACE_LBRACE_TILDE] = "{{~",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_TILDE_RBRACE_RBRACE] = "~}}",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_directive_token1] = "comment_directive_token1",
  [anon_sym_RBRACE] = "}",
  [sym_template] = "template",
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_LBRACE_PERCENT_TILDE] = anon_sym_LBRACE_PERCENT_TILDE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_TILDE_PERCENT_RBRACE] = anon_sym_TILDE_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_LBRACE_LBRACE_TILDE] = anon_sym_LBRACE_LBRACE_TILDE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_TILDE_RBRACE_RBRACE] = anon_sym_TILDE_RBRACE_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_directive_token1] = aux_sym_comment_directive_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_template] = sym_template,
  [sym_code] = sym_code,
  [sym_content] = sym_content,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment_directive] = sym_comment_directive,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(19);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '~') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '{') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('&' <= lookahead && lookahead <= '}')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '~') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('%' <= lookahead && lookahead <= '|')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '~') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('%' <= lookahead && lookahead <= '~')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('&' <= lookahead && lookahead <= '}')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(10);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(12);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '~') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('%' <= lookahead && lookahead <= '|')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(37);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(43);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(11);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('%' <= lookahead && lookahead <= '~')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          (lookahead < '%' || '~' < lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '{') ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '~') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_TILDE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_TILDE_PERCENT_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '~') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_TILDE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_TILDE_RBRACE_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_directive_token1);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(3);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(18),
    [sym_content] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_comment_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
  [2] = {
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
  [3] = {
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_content_token1] = ACTIONS(17),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(20),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(20),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(20),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(23),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(23),
    [anon_sym_LBRACE_POUND] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_content_token1,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(33), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [19] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_content_token1,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(40), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [38] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [52] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [66] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [80] = 3,
    ACTIONS(54), 1,
      aux_sym_code_token1,
    STATE(10), 1,
      aux_sym_code_repeat1,
    ACTIONS(56), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [92] = 3,
    ACTIONS(58), 1,
      aux_sym_code_token1,
    STATE(10), 1,
      aux_sym_code_repeat1,
    ACTIONS(61), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [104] = 3,
    ACTIONS(63), 1,
      aux_sym_code_token1,
    STATE(12), 1,
      aux_sym_code_repeat1,
    ACTIONS(56), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [116] = 3,
    ACTIONS(65), 1,
      aux_sym_code_token1,
    STATE(12), 1,
      aux_sym_code_repeat1,
    ACTIONS(61), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [128] = 3,
    ACTIONS(68), 1,
      aux_sym_code_token1,
    STATE(9), 1,
      aux_sym_code_repeat1,
    STATE(15), 1,
      sym_code,
  [138] = 3,
    ACTIONS(70), 1,
      aux_sym_code_token1,
    STATE(11), 1,
      aux_sym_code_repeat1,
    STATE(16), 1,
      sym_code,
  [148] = 1,
    ACTIONS(72), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [154] = 1,
    ACTIONS(74), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [160] = 1,
    ACTIONS(76), 1,
      aux_sym_comment_directive_token1,
  [164] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [168] = 1,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 138,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 154,
  [SMALL_STATE(17)] = 160,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 168,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(14),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(10),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_twig(void) {
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
