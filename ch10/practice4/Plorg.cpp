//
// Created by EDY on 2023/7/13.
//
#include "Plorg.h"
#include "iostream"
#include "string"
#include "cstring"
using namespace std;

Plorg::Plorg(const char *name, int n) {
    ci = n;
    strncpy(Name1, name, LIMIT);
}

void Plorg::showInfo() {
    cout << "name is: " << Name1;
    cout << "CI is: " << ci;
}
void Plorg::modifyName(int CI) {
    ci = CI;
}