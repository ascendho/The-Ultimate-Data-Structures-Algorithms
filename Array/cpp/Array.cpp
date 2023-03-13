#include "Array.h"

Array::Array(int length) {
    items = new int[length];
}

void Array::print() {
    for (int i = 0; i < count; i++)
        cout << items[i] << endl;

}
