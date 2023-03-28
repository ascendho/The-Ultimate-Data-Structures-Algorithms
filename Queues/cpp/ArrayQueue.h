#ifndef CPP_ARRAYQUEUE_H
#define CPP_ARRAYQUEUE_H


class ArrayQueue {
private:
    int front;
    int rear;
    int count;
    int *items;

    ArrayQueue();

    void enqueue();

    int dequeue();

};


#endif //CPP_ARRAYQUEUE_H
