#ifndef CPP_MYPRIORITYQUEUE_H
#define CPP_MYPRIORITYQUEUE_H

#include <string>

using namespace std;

class MyPriorityQueue {
private:
    int *items;
    int length;
    int count;

    int shiftItemsToInsert(int);

public:
    explicit MyPriorityQueue(int);

    void add(int);

    int remove();

    bool isEmpty();

    bool isFull();

    string toString();


};


#endif //CPP_MYPRIORITYQUEUE_H
