#include "CharFinder.h"
#include<unordered_map>

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
