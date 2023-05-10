#include "StringReverser.h"
#include <stack>

using namespace std;

string StringReverser::reverse(string input) {
    if (input.empty())
        throw "input is empty";

    stack<char> buf;

    for (auto ch: input) {
        buf.push(ch);
    }

    string reversed;

    while (!buf.empty()) {
        reversed += buf.top();
        buf.pop();
    }

    return reversed;
}
