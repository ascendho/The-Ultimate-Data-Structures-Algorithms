#include <iostream>
#include <malloc.h>
#include "LinkedList.h"

using namespace std;

int main() {
    // Custom LinkedList
    cout << "Custom LinkedList" << endl;

    LinkedList list;
    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addFirst(40);


    cout << list.indexOf(30) << endl;
    cout << boolalpha << list.contains(30) << endl;
    list.removeLast();
    list.removeFirst();

    cout << "--------" << endl;

    // Reverse
    cout << "Reverse" << endl;

    list.reverse();

    int *arr = list.toArray();
    for (int i = 0; i < _msize(arr) / sizeof(arr[0]); i++)
        cout << arr[i] << " ";

    cout << "--------" << endl;

    list.addFirst(30);
    list.addLast(50);

    // getKthFromTheEnd
    cout << "getKthFromTheEnd" << endl;

    cout << list.getKthFromTheEnd(3) << endl;
    cout << list.getKthNodeFromTheEnd(3)->value << endl;

    cout << "--------" << endl;

    // createWithLoop
    cout << "createWithLoop" << endl;

    LinkedList *listWithLoop = LinkedList::createWithLoop();
    cout << listWithLoop->hasLoop() << endl;

    cout << "--------" << endl;

    return 0;
}
