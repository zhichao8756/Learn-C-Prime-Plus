//
// Created by EDY on 2023/7/7.
//
#include "iostream"
#include "string"
#include "person.h"

int main() {
    using std::cout;
    using std::endl;
    cout << "Using constructors to create new objects\n";
    Person one;
    Person two("Smythecraft");       // use #2 with one default argument
    Person three("Dimwiddy", "Sam"); // use #2, no defaults
    three.Show();
    cout << endl;
    three.FormalShow();
    system("pause");
    return 0;
}