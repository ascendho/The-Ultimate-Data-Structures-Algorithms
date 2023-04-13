#include <iostream>
#include <unordered_map>
#include <set>
#include <functional>

#include"CharFinder.h"

using namespace std;

int Hash(string key);

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

//    findFirstNonRepeatingChar
    cout << "findFirstNonRepeatingChar" << endl;

    CharFinder charFinder;
    cout << charFinder.findFirstNonRepeatingChar("A Green Apple") << endl;
    cout << charFinder.findFirstNonRepeatingChar("An Apple is Green") << endl;

    cout << "--------" << endl;

//    Built-in set
    cout << "Built-in set" << endl;

    set<int> s;
    int numbers[] = {1, 2, 3, 3, 2, 1, 4};
    for (auto number: numbers) {
        s.insert(number);
    }
    for (auto x: s) {
        cout << x << " ";
    }
    cout << endl;

    cout << "--------" << endl;

//    findFirstRepeatedChar
    cout << "findFirstRepeatedChar" << endl;

    cout << charFinder.findFirstRepeatedChar("A Green Apple") << endl;
    cout << charFinder.findFirstRepeatedChar("An Apple is Green") << endl;

    cout << "--------" << endl;

//    Hash Functions
    cout << "Hash Functions" << endl;

    cout << Hash("123456-A") << endl;

    hash<string> str;
    cout << str("123456-A") << endl;

    cout << "--------" << endl;


    return 0;
}

int Hash(string key) {
    int hash = 0;
    for (auto ch: key)
        hash += ch;


    return hash % 100;
}