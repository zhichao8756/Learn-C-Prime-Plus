//
// Created by EDY on 2023/6/7.
//
#include "iostream"
#include "golf.h"
#include "cstring"
using namespace std;
void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf & g) {
    cout << "Please enter full name of player \n";
    cin.getline(g.fullname, Len);
    if (strcmp(g.fullname, "") == 0) {
        return 0;
    }
    cout << "Please enter the handicap of player:";
    cin >> g.handicap;
    cin.get();
    return 1;
}

void handicap(golf & g, int hc) {
    g.handicap = hc;
}
void showgolf(const golf & g) {
    cout << "fullname is " << g.fullname << endl;
    cout << "handicap is " <<g.handicap << endl;
}