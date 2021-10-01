#include "Lexer.h"
#include "Parser.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
    ostringstream stream;
    string inputString;



    Lexer* lexer = new Lexer();
    Parser* parser = new Parser();


    // TODO
    if (argc != 2) {
        std::cout << "usage: " << argv[0] << " input_file" << endl;
        return 1;
    }

    // open file
    string fileName = argv[1];
    ifstream input(fileName);
    if (!input.is_open()) {
        cout << "File " << fileName << " could not be found or opened." << endl;
        return 1;
    }

    try {
        stream << input.rdbuf();
        inputString = stream.str();
    }
    catch (char const* error){
        cout << error << endl;
        return 1;
    }


    lexer->Run(inputString);

    parser->Parse(lexer->getToken());


    delete lexer;
    delete parser;



    return 0;
}