//
// Created by EDY on 2023/6/7.
//
#include "iostream"
#include "golf.h"
#include "cstring"
using namespace std;
int main() {
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf andy;
    setgolf(andy);
    showgolf(andy);
    handicap(andy, 30);
    showgolf(andy);

}