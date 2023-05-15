//
// Created by EDY on 2023/5/11.
//
#include <iostream>
#include <array>
#include <vector>
int main() {
    using namespace std;
    // C, original C++
    double a1[4] = {0.1, 0.5, 4.5, 5.8};
    a1[-2] = 20.2;
    // C++98 STL
    vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;

    // C++11 -- create and initialize array object
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    return 0;
}