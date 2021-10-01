//
// Created by james on 9/28/2021.
//

#ifndef PARSER_H
#define PARSER_H

#include "Token.h"
#include "Lexer.h"
#include "Predicate.h"
#include "Rule.h"
#include "DatalogProgram.h"
#include "Parameter.h"
#include <vector>
#include <iostream>
#include <string>


class Parser {
private:

    //void Schemes(std::vector<Token*> tokens);


    // keep adding the rest of these lol


public:
    Parser();

    void Parse(std::vector<Token*> tokens);
};


#endif //PARSER_H
