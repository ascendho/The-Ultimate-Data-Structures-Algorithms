#include <iostream>
#include <string>
#include <vector>
#include "StringReverser.h"

using namespace std;

int main() {

    StringReverser reverser;
    string res = reverser.reverse("abcdefg");

    cout << res << endl;

//    vector<string>ch={"a","b","c"};
//    cout<<ch[0]<<endl;


    return 0;
}
