#include <ctype.h>
#include <string.h>
#include "lexer.h"

int main(){
    FILE *file;
    file = fopen("test.unn", "r");
    Token *token = lexer(file);
}