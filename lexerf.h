#ifndef LEXER_H_
#define LEXER_H_

typedef enum { 
    INT, KEYWORD, SEPARATOR, OPERATOR, END_OF_TOKENS, IDENTIFIER,
} TokenType;

typedef struct { TokenType type; char *value;} Token;

void print_token(Token token);
Token *generate_number(char *current, int *current_index);
Token *generate_keyword(char *current, int *current_index);
Token *generate_separator_or_opertor(char *current, int *current_index, TokenType type);
Token *lexer(FILE *file);

#endif
