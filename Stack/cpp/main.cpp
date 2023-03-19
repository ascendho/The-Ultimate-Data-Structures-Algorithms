#include <iostream>
#include <string>
#include "StringReverser.h"
#include "Expression.h"

using namespace std;

int main() {

    // Reversing a string
    StringReverser reverser;
    string res = reverser.reverse("abcdefg");

    cout << res << endl;

    // Paren-Matching
    Expression exp("{3*(2+4)}[0]");
    cout << boolalpha << exp.isBalanced() << endl;

    return 0;
}
