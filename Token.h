#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum class TokenType {
    COLON,
    COLON_DASH,
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    COMMENT,
    UNDEFINED,
    ENDFILE,

};

class Token
{
private:
    // TODO: add member variables for information needed by Token
    std::string value;
    int lineNumber;
    TokenType type;
    std::string tokenToString(TokenType type);

public:
    Token(TokenType type, std::string description, int line);

    // TODO: add other needed methods
    std:: string print();
};

#endif // TOKEN_H
