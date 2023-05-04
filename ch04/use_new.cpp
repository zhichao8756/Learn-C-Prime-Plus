//
// Created by EDY on 2023/5/4.
//
#include <iostream>
int main () {
    using namespace std;
    int nights = 1001;
    int * pt = new int;
    // *pt;
    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int: ";
    cout << "value = " << *pt << ": location " << pt << endl;
    double * pd = new double ;
    *pd = 99000000000.0;

    cout << "double " << *pd << " location: " << pd << endl;
    cout << "pointer address: " << &pd << endl;
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    return 0;
}