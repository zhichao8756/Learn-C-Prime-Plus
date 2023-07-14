//
// Created by EDY on 2023/7/12.
//

#ifndef STACK_H
#define STACK_H
struct customer {
    char fullname[35];
    double payment;
};
typedef customer Item;

class Stack {
private:
    static const int num = 35;
    Item items[num];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool pop(Item &item);
    // pop() returns false if stack already is empty, true otherwise
    bool push(Item &item);
};
#endif
