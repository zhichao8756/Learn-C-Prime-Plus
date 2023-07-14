//
// Created by EDY on 2023/7/13.
//
#include "stack.h"
#include "iostream"
Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    std::cout << "current x is: " << x << std::endl;
    std::cout << "current y is: " << y << std::endl;
}

Move Move::add(const Move &m) const {
    Move new_m;
    new_m.x = m.x + (*this).x;
    new_m.y = m.y + (*this).y;
    return new_m;
}
void Move::reset(double a, double b) {
    x = a;
    y = b;
}