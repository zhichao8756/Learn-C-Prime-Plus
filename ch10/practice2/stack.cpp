//
// Created by EDY on 2023/7/12.
//
#include "stack.h"
Stack::Stack() {
    top = 0;
}
bool Stack::isempty() const {
    return top == 0;
}
bool Stack::isfull() const {
    return top == num;
}
bool Stack::pop(Item &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else {
        return false;
    }
}
bool Stack::push(Item& item) {
    if (top < num)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
/*bool Stack::pop(const Item & item) {
    if (top < num) {
        return true;
    } else {
        return false;
    }
}*/
/*
bool Stack::push(Item & item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else {
        return false;
    }
}*/
