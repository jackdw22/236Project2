//
// Created by james on 9/29/2021.
//

#ifndef PREDICATE_H
#define PREDICATE_H
#include "Parameter.h"
#include <vector>
#include <iostream>
#include <string>


class Predicate {
private:
    std::string namePredicate;
    std::vector<Parameter*> parameters;
public:
    Predicate(std::string name);
    void addParameter(Parameter*);
    void predicateParse(){

    }

};


#endif //PROJECT1_PREDICATE_H
