//
// Created by EDY on 2023/7/13.
//
#include "stack.h"
#include "iostream"
using namespace std;
int main () {
    double a;
    double b;
    cout << "please enter a is: ";
    cin >> a;
    cout << "please enter b is: ";
    cin >> b;
    Move newMove;
    Move move(a, b);
    move.showmove();
    Move c  = newMove.add(move);
    c.showmove();
    return 0;
}