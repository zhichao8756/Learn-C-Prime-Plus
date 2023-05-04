//
// Created by zack on 2023/4/24.
//
#include <iostream>
int main () {
    using namespace std;
    char ch = 'M';
    int i = ch;
//    cout << "asc II code for " << ch << " is " << i << endl;
//    ch = ch + 1;
    i = ch;
    cout << "asc II code for " << ch << " is " << i << endl;
    cout << "display char ch using cout.put(ch):";
    cout.put(ch);
    cout.put('!');
    cout << endl << "done" << endl;
    return 0;
}