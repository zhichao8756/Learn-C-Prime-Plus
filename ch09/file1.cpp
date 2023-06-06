//
// Created by EDY on 2023/6/4.
//
#include <iostream>
#include "coordin.h"
using namespace std;
int main() {
    rect rplace;
    polar pplace;
    cout << "enter the x and y values:";
    while (cin >> rplace.x >> rplace.y) {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "next to number (q to quit): ";
    }
    cout << "bye!";
    return 0;
}