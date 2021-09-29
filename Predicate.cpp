//
// Created by james on 9/29/2021.
//

#include "Predicate.h"

Predicate::Predicate(std::string name) {
    this->namePredicate = name;
}

void Predicate::addParameter(Parameter* para) {
    parameters.push_back(para);
}

