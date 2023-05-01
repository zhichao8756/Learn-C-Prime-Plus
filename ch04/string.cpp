//
// Created by zack on 2023/4/25.
//
#include <iostream>
#include <cstring>
int main () {
    using namespace std;
    const int size = 15;
    char name1[size];
    char name2[] = "C+owboy";
    cout << "howdy! im" << name2 << endl;
    cin >> name1;
    cout << "well! " << name1 << endl;
    cout << strlen(name1) << "letters and is shorted\n";
    cout << sizeof(name1) << endl;
    cout << "...is" << name1[0] << endl;
    name2[3] = '\0';
    cout << name2  << endl;

    return 0;
}