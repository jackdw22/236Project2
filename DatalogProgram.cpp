//
// Created by james on 9/29/2021.
//

#include "DatalogProgram.h"
DatalogProgram::DatalogProgram(){
    std::cout << "Datalog was created" << std::endl;
}

void DatalogProgram::addPredicate(std::vector<Predicate *> &vPreds, Predicate *predicate) {
    vPreds.push_back(predicate);
    return;
}

void DatalogProgram::addRule(std::vector<Rule *> &vRules, Rule *rule) {
    vRules.push_back(rule);
    return;
}

void DatalogProgram::datalogParse() {

}