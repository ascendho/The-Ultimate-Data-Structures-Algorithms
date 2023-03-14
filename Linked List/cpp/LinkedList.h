#ifndef CPP_LINKEDLIST_H
#define CPP_LINKEDLIST_H

struct Node {
public:
    int value;
    Node *next;

    explicit Node(int value);

};

class LinkedList {
private:
    Node *first;
    Node *last;

    bool isEmpty();

public:
    LinkedList();

    void addFirst(int item);

    void addLast(int item);

    int indexOf(int item);

    bool contains(int item);


};


#endif //CPP_LINKEDLIST_H
