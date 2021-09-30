//
// Created by james on 9/29/2021.
//

#ifndef PREDICATE_H
#define PREDICATE_H
#include "Parameter.h"
#include <vector>
#include <iostream>
#include <string>
#include <Lexer.h>
#include <Token.h>


class Predicate {
private:
    std::vector<Parameter*> parameters;
public:
    Predicate(std::string name);
    void addParameter(Parameter*);
    void predicateParse(std::vector<Token*>& tokens);
    void LEFT_PAREN(std::vector<Token*>& tokens);
    void parameter(std::vector<Token*>& tokens);
    void RIGHT_PAREN(std::vector<Token*>& tokens);
    void ID(std::vector<Token*>& tokens);
    void COMMA(std::vector<Token*>& tokens);
    std::string getParameters();

    std::string namePredicate;
};


#endif //PROJECT1_PREDICATE_H
