#include "Expression.h"
#include <stack>
#include <utility>

Expression::Expression(string input) {
    this->input = std::move(input);
}

bool Expression::isBalanced() {
    stack<char> expStack;
    for (auto ch: input) {
        if (isLeftBracket(ch))
            expStack.push(ch);
        else if (isRightBracket(ch)) {
            if (expStack.empty())
                return false;

            char top = expStack.top();
            expStack.pop();
            if (!bracketsMatch(top, ch))return false;
        }
    }
    return expStack.empty();
}

bool Expression::isLeftBracket(char ch) {
    return leftBrackets.find(ch) >= 0 && leftBrackets.find(ch) < leftBrackets.length();
}

bool Expression::isRightBracket(char ch) {
    return rightBrackets.find(ch) >= 0 && rightBrackets.find(ch) < rightBrackets.length();
}

bool Expression::bracketsMatch(char left, char right) {
    return leftBrackets.find(left) == rightBrackets.find(right);
}