//
// Created by james on 9/15/2021.
//

#ifndef STRINGAUTOMATON_H
#define STRINGAUTOMATON_H
#include "Automaton.h"

class StringAutomaton: public Automaton {
private:
    void S1(const std::string& input);
    void S2(const std::string& input);

public:
    StringAutomaton() : Automaton(TokenType::STRING){}

    void S0(const std::string& input);
};


#endif //PROJECT1_STRINGAUTOMATON_H