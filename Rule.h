//
// Created by james on 9/29/2021.
//

#ifndef RULE_H
#define RULE_H
#include "Predicate.h"
#include <iostream>
#include <vector>
#include <string>


class Rule {
private:
    Predicate* headPredicate;
    std::vector<Predicate*> bodyPredicates;
public:
    Rule(Predicate* headPredicate,  std::vector<Predicate*> bodyPredicates);
};


#endif //RULE_H
