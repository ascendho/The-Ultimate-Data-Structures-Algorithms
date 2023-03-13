#include <iostream>
#include "Array.h"

int main() {
    Array numbers(3);

    numbers.insert(100);
    numbers.insert(400);
    numbers.insert(520);
    numbers.print();

    Array other(5);
    other.insert(3);
    other.insert(400);
    other.insert(100);
    other.print();

    Array inter = numbers.intersect(other);
    inter.print();


    return 0;
}
