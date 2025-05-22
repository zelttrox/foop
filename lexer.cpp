#include <iostream>
using namespace std;

#include "lexer.h"
#include "log.cpp"

// Import libraries
#include <string>
#include <vector>

// Converts an array of chars into an array of tokens
// TODO: REMOVE ALL WHITESPACES BEFORE CONVERTING
vector<Token> GetTokens(vector<string> chars) {

    vector<Token> tokens;
    Logic logic;
    
    // Loop through providen array
    for (size_t i = 0; i < chars.size(); i++) {
        log("processing token: " + chars.at(i));
        Token token;
        // Check char type
        if (chars.at(i) == "") cout << "Error: Couldn't convert null character";
        else if (chars.at(i) == "new") {
            token = key_New;
            tokens.push_back(token);
            log("adding token: " + token);
            break;
        }
    }
    return tokens;
}
