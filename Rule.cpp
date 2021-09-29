//
// Created by james on 9/29/2021.
//

#include "Rule.h"
Rule::Rule(Predicate *headPredicate, std::vector<Predicate *> bodyPredicates) {
    this->headPredicate = headPredicate;
    this->bodyPredicates = bodyPredicates;
}