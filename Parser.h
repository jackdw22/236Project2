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
    int index;
    std::string typeList;

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
    void COMMA(std::vector<Token*> tokens);
    void STRING(std::vector<Token*> tokens);
    void stringList(std::vector<Token*> tokens);
    void PERIOD(std::vector<Token*> tokens);
    void COLON_DASH(std::vector<Token*> tokens);
    void parameter(std::vector<Token*> tokens);
    void QUERIES(std::vector<Token*> tokens);
    void Q_MARK(std::vector<Token*> tokens);
    void ENDFILE(std::vector<Token*> tokens);

    // keep adding the rest of these lol


public:
    Parser();

    void Parse(std::vector<Token*> tokens);
    int getIndex(){
        return index;
    }
    std::string getTypeList(){
        return typeList;
    }
    void setIndex(int number){
        index = number;
        return;
    }
    void setTypeList(std::string type){
        typeList = type;
    }
};


#endif //PARSER_H
