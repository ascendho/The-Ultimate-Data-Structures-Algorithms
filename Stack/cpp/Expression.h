#ifndef CPP_EXPRESSION_H
#define CPP_EXPRESSION_H

#include<string>
#include<vector>

using namespace std;

class Expression {

private:
//    vector<char> input;
    string input;

public:
    Expression(string input);

    bool isBalanced();

    bool isLeftBracket(char ch);

    bool isRightBracket(char ch);

    bool bracketsMatch(char left, char right);


};


#endif //CPP_EXPRESSION_H
