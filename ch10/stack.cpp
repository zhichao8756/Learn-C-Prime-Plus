//
// Created by EDY on 2023/7/7.
//
#include "stack.h"
Stack::Stack() {
    top = 0;
}
bool Stack::isempty() const {
    return top == 0;
}
bool Stack::isfull() const {
    return top == Max;
}
bool Stack::pop(const Item & item) {
    if (top < Max) {
        return true;
    } else {
        return false;
    }
}
bool Stack::push(Item & item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else {
        return false;
    }
}
