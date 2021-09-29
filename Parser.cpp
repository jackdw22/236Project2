//
// Created by james on 9/28/2021.
//

#include "Parser.h"

Parser::Parser() {
    std::cout << "it was made" << std::endl;
    index = 0;
}

void Parser::Parse(std::vector<Token *> tokens) {
    try {

        if (tokens.at(index)->tokenToString(tokens.at(index)->type) == "SCHEMES") {
            Schemes(tokens);
        }else{
            throw (505);
        }
    }

    catch(...){
        std::cout << "Failure!" << std::endl;
        std::cout << tokens.at(index)->print();
    }

    return;
}

void Parser::Schemes(std::vector<Token *> tokens) {
    index++;
    try {

        if (tokens.at(index)->tokenToString(tokens.at(index)->type) == "COLON") {
            COLON(tokens);
        }else{
            throw (505);
        }
    }

    catch(...){
        std::cout << "Failure!" << std::endl;
        std::cout << tokens.at(index)->print();
 // TODO make it print the bad token <3
    }

    return;
}


void Parser::COLON(std::vector<Token *> tokens) {
    index++;
    try {

        if (tokens.at(index)->tokenToString(tokens.at(index)->type) == "ID") {
            scheme(tokens);
        }else{
            throw (505);
        }
    }

    catch(...){
        std::cout << "Failure!" << std::endl;
        std::cout << tokens.at(index)->print();
    }
    return;
}


void Parser::scheme(std::vector<Token *> tokens) {
    ID(tokens);
    return;
}

void Parser::ID(std::vector<Token *> tokens) {
    index++;
    try {

        if (tokens.at(index)->tokenToString(tokens.at(index)->type) == "LEFT_PAREN") {
            LEFT_PAREN(tokens);
        }else{
            throw (505);
        }
    }

    catch(...){
        std::cout << "Failure!" << std::endl;
        std::cout << tokens.at(index)->print();
    }
    return;
}
void Parser::LEFT_PAREN(std::vector<Token *> tokens) {
    std::cout << "we made it to left paren" << std::endl;
    return;
}





