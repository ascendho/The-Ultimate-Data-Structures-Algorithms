#ifndef CPP_ARRAY_H
#define CPP_ARRAY_H

#include <iostream>

using namespace std;

class Array {
private:
    int *items;
    int count;
    int Length;

    void resizeIfRequired();

public:
    Array(int length);

    void print();

    void insert(int item);

    void insertAt(int item,int index);

    void removeAt(int index);

    int indexOf(int item);

    int max();

    Array intersect(Array other);

    void reverse();


};

#endif
