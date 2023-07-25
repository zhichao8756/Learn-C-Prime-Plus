//
// Created by EDY on 2023/7/14.
//
#include "iostream"
#include "stonewt.h"
#include "iostream"
using namespace std;
void display(const Stonewt & st, int n);
int main () {
    Stonewt incognito(275); // uses constructor to initialize
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    Stonewt arr[6] = {
            incognito,wolfe,taft
    };
    for (int i = 0; i < 6; ++i) {
        /*getline(cin, arr[i].brand);
        cout << "Please enter the year made: ";
        cin >> arr[i].year;
        cin.get();*/
        arr[i] = Stonewt(12);
    }
    system("pause");
    return 0;
}
void display(const Stonewt & st, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        cout << st;
    }
}