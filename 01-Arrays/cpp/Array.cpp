#include "Array.h"

Array::Array(int length) {
    items = new int[length];
    this->Length = length;
    this->count = 0;
}

void Array::print() {
    for (int i = 0; i < count; i++)
        cout << items[i] << endl;

}

void Array::resizeIfRequired() {
    if (count == Length) {
        int *newItems = new int[2 * Length];
        for (int i = 0; i < count; i++)
            newItems[i] = items[i];

        items = newItems;

        // update Length
        Length *= 2;
    }
}

void Array::insert(int item) {
    resizeIfRequired();
    items[count++] = item;

}

void Array::insertAt(int item, int index) {
    if (index < 0 || index >= Length)
        throw "index out of bound";
    resizeIfRequired();
    for (int i = count - 1; i >= index; i--)
        items[i + 1] = items[i];
    items[index] = item;
    count++;
}

void Array::removeAt(int index) {
    if (index < 0 || index >= count)
        throw "index out of bound";

    for (int i = index; i < count; i++)
        items[i] = items[i + 1];
    count--;
}

int Array::indexOf(int item) {
    for (int i = 0; i < count; i++)
        if (item == items[i])
            return i;
    return -1;
}

int Array::max() {
    int max = items[0];
    for (int i = 1; i < count; i++)
        if (items[i] > max)
            max = items[i];

    return max;

}

Array Array::intersect(Array other) {
    Array intersection(count);
    for (int i = 0, item = items[0]; i < count; i++, item = items[i])
        if (other.indexOf(item) >= 0)
            intersection.insert(item);

    return intersection;

}

void Array::reverse() {
    int *newItems = new int[count];
    for (int i = 0; i < count; i++)
        newItems[i] = items[count - i - 1];

    items = newItems;

}


