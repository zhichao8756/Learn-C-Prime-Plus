//
// Created by zack on 2023/5/14.
//
#include <iostream>
#include <array>

int main() {
    using namespace std;
    const int size = 16;
    array<long long , size> factorials;
    factorials[1] = factorials[0] = 1LL;
    cout << "this is " << factorials[0];
    for (int i = 2; i < size; ++i) {
        factorials[i] = i * factorials[i-1];
    }
    for (int i = 0; i < size; ++i) {
        cout << i << " ! = " << factorials[i] << endl;
    }
    return 0;
}
