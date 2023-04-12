#include "CharFinder.h"
#include<unordered_map>
#include<set>

char CharFinder::findFirstNonRepeatingChar(string str) {
    unordered_map<char, int> unorderedMap;

    for (char ch: str) {
        if (0 == unorderedMap.count(ch))
            unorderedMap[ch] = 1;
        else
            unorderedMap[ch] += 1;
    }

    for (char ch: str) {
        if (1 == unorderedMap.at(ch))
            return ch;
    }


    return CHAR_MIN;
}

char CharFinder::findFirstRepeatedChar(string str) {
    set<int> s;

    for (char ch: str) {
        if (s.count(ch))
            return ch;

        s.insert(ch);
    }

    return CHAR_MIN;
}
