#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList list;
    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addFirst(40);

    cout << list.indexOf(30) << endl;
    cout << boolalpha << list.contains(30) << endl;


    return 0;
}
