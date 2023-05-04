//
// Created by EDY on 2023/5/4.
//
#include <iostream>
int main () {
    using namespace std;
    int updates = 6; // declare a variable
    int * p_updates; // declare pointer to an int
    p_updates = &updates; // assign address of int to pointer
    // express address two ways
    cout << "values: updates= " << updates;
    cout << ", p_updates= " << *p_updates << endl;

    cout << "address : &updates " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "now updates = " << updates << endl;
    cout << "now updates = " << *p_updates << endl;
    return 0;
}