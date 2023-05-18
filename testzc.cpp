//
// Created by zack on 2023/4/24.
//
#include <iostream>
#include <string>
#include <string>
int main () {
    using namespace std;
    // char name2[] = "C+owboy";
    // int arr[1] = { 12 };
    // 这是错误的写法！
    // arr[0] = 12;
    // string a = "zack wang";
//    cout << "dont do that again!" << arr[0]<< endl;
//    cout << "333za111ck \"zhang\" hacker \nwas here! \n";
//    cout << R"+*("(wang)", instead of endl.)+*";
//    cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;
    int age = 30;
    const int * pt = &age;
//    int sage = 80;
//    pt = &sage; // okay to point to another location
    cout << *pt;
    return 0;
}