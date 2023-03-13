#ifndef CPP_ARRAY_H
#define CPP_ARRAY_H

#include <iostream>

using namespace std;

class Array {
private:
    int *items;
    int count;

public:
    Array(int length);

    void print();
};

#endif
