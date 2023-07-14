//
// Created by EDY on 2023/7/14.
//
#include "mytime3.h"
#include "iostream"
int main() {
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca: \n";
    cout << aida<<"; " << tosca << endl;

    temp = aida + tosca; // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida* 1.17;   // member operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    system("pause");
    return 0;
}