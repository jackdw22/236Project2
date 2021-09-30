//
// Created by james on 9/29/2021.
//

#include "Rule.h"
Rule::Rule(Predicate *headPredicate) {
    this->headPredicate = headPredicate;
}

std::string Rule::ruleOutput() {
    std::string output = "";
    output += headPredicate->namePredicate + "(";
    output += headPredicate->getParameters() + ")";

    return output;
}

void Rule::ruleParser(std::vector<Token *>& tokens) {
    tokens.erase(tokens.begin());
    try {

        if (tokens.at(0)->tokenToString(tokens.at(0)->type) == "ID") {
            Predicate *Predicate = new class Predicate(tokens.at(0)->getValue());
            bodyPredicates.push_back(Predicate);
            Predicate->predicateParse(tokens);
            ID(tokens);
        }else{
            throw (505);
        }
    }
    catch(...){
        std::cout << "Failure!" << std::endl;
        std::cout << tokens.at(0)->print();
        std::cout << "Rule Parser" << std::endl;
    }
    return;
}

void Rule::COMMA(std::vector<Token *>& tokens) {
    tokens.erase(tokens.begin());
    try {

        if (tokens.at(0)->tokenToString(tokens.at(0)->type) == "ID") {
            Predicate *Predicate = new class Predicate(tokens.at(0)->getValue());
            bodyPredicates.push_back(Predicate);
            Predicate->predicateParse(tokens);
            ID(tokens);
            return;
        }else{
            throw (505);
        }
    }
    catch(...){
        std::cout << "Failure!" << std::endl;
        std::cout << tokens.at(0)->print();
        std::cout << "Rule Parser COMMA" << std::endl;
    }
    return;
}

void Rule::ID(std::vector<Token *>& tokens) {
    tokens.erase(tokens.begin());
    try {

        if (tokens.at(0)->tokenToString(tokens.at(0)->type) == "COMMA") {
            COMMA(tokens);
        } else if(tokens.at(0)->tokenToString(tokens.at(0)->type) == "PERIOD"){
            return;
        }else{
            throw (505);
        }
    }
    catch(...){
        std::cout << "Failure!" << std::endl;
        std::cout << tokens.at(0)->print();
        std::cout << "Rule Parser PERIOD" << std::endl;
    }
    return;
}



