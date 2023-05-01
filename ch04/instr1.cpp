//
// Created by zack on 2023/4/25.
//
#include <iostream>
int main () {
    using namespace std;
    const int size = 20;
    char name[size];
    char desert[size];
    cout << "enter your name" << endl;
    // cin.getline(name, size);
    cin >> desert;
    cout << "enter your desert \n";
    cin.getline(name, size);
    cout << "well; " << name << " your desert " << desert << endl;
    return 0;
}