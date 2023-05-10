#include <iostream>
#include <string>
#include "StringReverser.h"
#include "Expression.h"
#include "myStack.h"
#include "TwoStacks.h"
#include "MinStack.h"

using namespace std;

int main() {

    // Reversing a string
    cout << "Reversing a string" << endl;

    StringReverser reverser;
    string res = reverser.reverse("bcdedit");
    cout << res << endl;

    cout << "--------" << endl;

    // Paren-Matching
    cout << "Paren-Matching" << endl;

    Expression exp("{3*(2+4)}[0]");
    cout << boolalpha << exp.isBalanced() << endl;

    cout << "--------" << endl;


    // myStack
    cout << "myStack" << endl;

    myStack st(5);
    st.push(30);
    st.push(20);
    st.push(40);
    st.push(35);
    st.push(30);
    st.pop();
    cout << st.peek() << endl;

    cout << "--------" << endl;


    // TwoStacks
    cout << "TwoStacks" << endl;

    TwoStacks twoStacks(5);
    twoStacks.push1(4);
    twoStacks.push1(10);

    twoStacks.push2(20);
    twoStacks.push2(40);
    //twoStacks.push2(50);

    while (!twoStacks.isEmpty1() || !twoStacks.isEmpty2()) {

        cout << twoStacks.pop1() << endl;
        cout << twoStacks.pop2() << endl;
    }

    cout << "--------" << endl;


    // MinStack
    cout << "MinStack" << endl;

    MinStack minStack;

    minStack.push(5);
    minStack.push(2);
    minStack.push(10);
    minStack.push(1);

    cout << minStack.min() << endl;
    minStack.pop();
    cout << minStack.min() << endl;

    cout << "--------" << endl;

    return 0;
}
