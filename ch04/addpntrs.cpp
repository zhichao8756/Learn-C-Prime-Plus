//
// Created by EDY on 2023/5/4.
//
#include <iostream>
int main () {
    using namespace std;
    // double wages = 12.33;
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {3, 2, 2};
    double * pw = wages;

    short * ps = &stacks[0]; // equal stacks = &stacks[0]
    cout << pw << endl;
    cout << *pw << endl;
    pw = pw + 1;
    cout << pw << endl;
    cout << *pw << endl;

    cout << ps << endl;
    cout << *ps << endl;

    cout << stacks << endl;
    cout << *(stacks)<< endl;
    return 0;
}