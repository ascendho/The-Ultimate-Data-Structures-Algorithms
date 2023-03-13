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

Array::Array(int length) {
    items = new int[length];
}

void Array::print() {
    for (int i = 0; i < count; i++)
        cout << items[i] << endl;

}


#endif
