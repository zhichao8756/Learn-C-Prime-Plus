//
// Created by EDY on 2023/5/4.
//
#include <iostream>
#include <cstring>
int main () {
    using namespace std;
    char animal[20] = {"bird"};
    const char * bird = "wren";
    char * ps;
    cout << animal << endl;
    cout << bird << endl;
    // cout << ps;

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps;
    cout << animal << " at " << (int * ) animal << endl;
    cout << &animal;
    return 0;
}