#include "lexer.h"

Token GetToken(Tokenizer& tokenizer) {

    Token token = {};

    switch (tokenizer.location[0]) {
    case '(': token.type = sep_LeftParenthesis; break;
    case ')': token.type = sep_RightParenthesis; break;
    case '{': token.type = sep_LeftBracket; break;
    case '}': token.type = sep_RightBracket; break;
    case '[': token.type = sep_LeftBrace; break;
    case ']': token.type = sep_RightBrace; break;
    
    default:
        break;
    }
}