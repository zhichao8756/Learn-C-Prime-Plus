//
// Created by EDY on 2023/5/4.
//
#include <iostream>
int main () {
    using namespace std;
    int higgens = 5;
    int * pt;
    pt = &higgens;
    cout << "value of higgens " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "value of *pt " << *pt << "; Address of pt = " << pt << endl;
    return 0;
}