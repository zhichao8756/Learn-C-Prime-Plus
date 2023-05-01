//
// Created by zack on 2023/4/25.
//
#include <iostream>
int main () {
    using namespace std;
    cout << "what is was your house build ? \n";
    int year;
    (cin >> year).get();
    cout << "what is you address" << endl;
    char address[80];
    cin.getline(address, 80);
    cout << "address is " << address;
    return 0;
}