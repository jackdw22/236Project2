//
// Created by james on 9/29/2021.
//

#ifndef DATALOGPROGRAM_H
#define DATALOGPROGRAM_H
#include "Rule.h"
#include "Predicate.h"
#include "Token.h"
#include "Lexer.h"
#include "Parser.h"
#include <iostream>
#include <vector>

class DatalogProgram {
private:
    std::vector<Rule*> rules;
    std::vector<Predicate*> facts;
    std::vector<Predicate*> schemes;
    std::vector<Predicate*> queries;
    std::string typeList;

public:
    DatalogProgram();
    void datalogParse(std::vector<Token*>& tokens);
    void Schemes(std::vector<Token*>& tokens);
    void COLON(std::vector<Token*>& tokens);
    void endPredicate(std::vector<Token*>& tokens);
    void FACTS(std::vector<Token*>& tokens);
    void QUERIES(std::vector<Token*> &tokens);
    void PERIOD(std::vector<Token*> &tokens);
    void RULES(std::vector<Token*> &tokens);
    void Q_MARK(std::vector<Token*> &tokens);
    std::string datalogOutput();
    std::string schemesOutput(std::vector<Predicate*> predicates);
    std::string rulesOutput();


};


#endif //DATALOGPROGRAM_H
