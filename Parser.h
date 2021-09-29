//
// Created by james on 9/28/2021.
//

#ifndef PARSER_H
#define PARSER_H

#include "Token.h"
#include "Lexer.h"
#include <vector>
#include <iostream>


class Parser {
private:
    int index;

    void Schemes(std::vector<Token*> tokens);
    void COLON(std::vector<Token*> tokens);
    void scheme(std::vector<Token*> tokens);
    void LEFT_PAREN(std::vector<Token*> tokens);
    void idList(std::vector<Token*> tokens);
    void RIGHT_PAREN(std::vector<Token*> tokens);
    void schemeList(std::vector<Token*> tokens);
    void FACTS(std::vector<Token*> tokens);
    void factList(std::vector<Token*> tokens);
    void fact(std::vector<Token*> tokens);
    void RULES(std::vector<Token*> tokens);
    void ruleList(std::vector<Token*> tokens);
    void rule(std::vector<Token*> tokens);
    void headPredicate(std::vector<Token*> tokens);
    void ID(std::vector<Token*> tokens);

    // keep adding the rest of these lol


public:
    Parser();

    void Parse(std::vector<Token*> tokens);
};


#endif //PARSER_H
