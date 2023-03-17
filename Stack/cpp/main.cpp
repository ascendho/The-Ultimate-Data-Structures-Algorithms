#include <iostream>
#include <string>
#include "StringReverser.h"

using namespace std;

int main() {

    StringReverser reverser;
    string res = reverser.reverse("abcdefg");

    cout << res << endl;

    return 0;
}
