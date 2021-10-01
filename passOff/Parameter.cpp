//
// Created by james on 9/29/2021.
//

#include "Parameter.h"

Parameter::Parameter(std::string para) {
    this->para = para;
}

std::string Parameter::getParameter() {
    return para;
}