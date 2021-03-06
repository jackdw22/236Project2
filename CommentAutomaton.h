//
// Created by james on 9/15/2021.
//

#ifndef COMMENTAUTOMATON_H
#define COMMENTAUTOMATON_H
#include "Automaton.h"

class CommentAutomaton: public Automaton {
private:
    void S1(const std::string& input);

public:
    CommentAutomaton() : Automaton(TokenType::COMMENT){}

    void S0(const std::string& input);
};


#endif //PROJECT1_COMMENTAUTOMATON_H
