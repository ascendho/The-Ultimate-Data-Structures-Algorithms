#include <iostream>
#include <malloc.h>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList list;
    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addFirst(40);

    // [40 10 20 30]

    cout << list.indexOf(30) << endl;
    cout << boolalpha << list.contains(30) << endl;
    list.removeLast();
    list.removeFirst();

    // [10 20]

    list.reverse();
    // [20 10]

    int *arr = list.toArray();
    for (int i = 0; i < _msize(arr) / sizeof(arr[0]); i++)
        cout << arr[i] << " ";

    return 0;
}
