//
// Created by EDY on 2023/7/7.
//
#include "person.h"
#include "iostream"
#include "string"
#include "cstring"
using namespace std;
Person::Person(const string & ln, const char * fn) { //默认参数在原型时有即可，定义时不需要有
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::Show() const {
    cout << "this is first name: " << fname;
    cout << "this is last name: " << lname;
}

void Person::FormalShow() const {
    cout << "this is first name: " << fname;
    cout << "this is last name: " << lname;
}