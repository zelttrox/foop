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
    Logic logic = none;
    
    // Loop through providen array
    for (size_t i = 0; i < chars.size(); i++) {
        log("processing token: " + chars.at(i));
        Token token;
        // Logic
        // if (chars.at(i).find("~") != string::npos) {
        //     logic = var_declaration;
        // }
        // Check char type
        if (chars.at(i) == "") cout << "Error: Character is null";
        else if (chars.at(i) == "new") {
            token = key_New;
            tokens.push_back(token);
        }
        else if (chars.at(i) == "~string") {
            token = var_String;
            tokens.push_back(token);
        }
    }
    for (size_t i = 0; i < tokens.size(); i++) {
        string s = to_string(tokens.at(i));
        s += " ";
        cout << s;
    }
    
    return tokens;
}
