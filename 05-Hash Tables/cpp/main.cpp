#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
//    Built-in HashMap

    cout << "Built-in HashMap" << endl;
    unordered_map<int, string> myMap;
    myMap[1] = "Mosh";
    myMap[2] = "John";
    myMap[3] = "Mary";

    for (const auto &pair: myMap) {
        cout << pair.first << ", " << pair.second << endl;
    }

    cout << "--------" << endl;

    return 0;
}
