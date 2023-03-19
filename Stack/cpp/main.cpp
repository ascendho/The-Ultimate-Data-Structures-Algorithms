#include <iostream>
#include <string>
#include "StringReverser.h"
#include "Expression.h"
#include "myStack.h"

using namespace std;

int main() {

    // Reversing a string
    StringReverser reverser;
    string res = reverser.reverse("abcdefg");
    cout << res << endl;

    // Paren-Matching
    Expression exp("{3*(2+4)}[0]");
    cout << boolalpha << exp.isBalanced() << endl;

    // myStack
    myStack st(5);
    st.push(30);
    st.push(20);
    st.push(40);
    st.push(35);
    st.push(30);
    st.pop();
    cout << st.peek() << endl;

    return 0;
}
