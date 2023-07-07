//
// Created by EDY on 2023/7/7.
//

#ifndef STACK_H
#define STACK_H
typedef unsigned long Item;
class Stack {
private:
    enum {Max = 10};
    Item items[Max];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool pop(const Item &item);
    // pop() returns false if stack already is empty, true otherwise
    bool push(Item &item);
};
#endif
