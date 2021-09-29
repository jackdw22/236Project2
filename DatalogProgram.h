//
// Created by james on 9/29/2021.
//

#ifndef DATALOGPROGRAM_H
#define DATALOGPROGRAM_H
#include "Rule.h"
#include "Predicate.h"
#include "Token.h"
#include "lexer.h"
#include <iostream>
#include <vector>

class DatalogProgram {
private:
    std::vector<Rule*> rules;
    std::vector<Predicate*> facts;
    std::vector<Predicate*> schemes;
    std::vector<Predicate*> queries;

public:
    DatalogProgram();
    void addPredicate(std::vector<Predicate*>& vPreds, Predicate* predicate);
    void addRule(std::vector<Rule*>& vRules, Rule* rule);
    void datalogParse(std::vector<Token*> tokens);
    void
};


#endif //DATALOGPROGRAM_H
