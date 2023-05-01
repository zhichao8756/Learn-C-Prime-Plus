//
// Created by zack on 2023/5/1.
//
#include <iostream>
int main () {
    using namespace std;
    union one4all {
        int int_val;
        long long_val;
        double double_val;
    };
    one4all pail;
    pail.int_val = 12;
    pail.double_val = 12.33;
    cout << pail.double_val;
    return 0;
}