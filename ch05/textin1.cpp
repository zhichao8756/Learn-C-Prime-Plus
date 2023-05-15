//
// Created by EDY on 2023/5/15.
//
#include "iostream"
int main() {
    using namespace std;
    char ch;
    int count = 0;
    cout << "enter character; enter # to quit; \n";
    cin >> ch;
    while (ch != '#') {
    cout << ch;
    ++count;
    cin.get(ch);
}
    cout << endl << count << " characters read \n";
    return 0;
}