//
// Created by zack on 2023/5/14.
//
#include <iostream>
int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by) {
        cout << i << endl;
    }
    return 0;
}