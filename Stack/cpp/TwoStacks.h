#ifndef CPP_TWOSTACKS_H
#define CPP_TWOSTACKS_H


class TwoStacks {
private:
    int top1;
    int top2;
    int *items;
    int length;


public:
    TwoStacks(int);
    void push1(int);
    void push2(int);
    int pop1();
    int pop2();
    bool isEmpty1() const;
    bool isEmpty2() const;
    bool isFull1() const;
    bool isFull2() const;


};


#endif //CPP_TWOSTACKS_H
