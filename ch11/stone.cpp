//
// Created by EDY on 2023/7/14.
//
#include "iostream"
#include "stonewt.h"
using std::cout;
using std::endl;
void display(const Stonewt & st, int n);
int main () {
    Stonewt incognito(275); // uses constructor to initialize
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    cout << incognito;
    cout << "The detective weighed ";
    cout << wolfe;
    cout << "total plus is: " << incognito + wolfe << endl;
    cout << "The President weighed ";
    cout << taft;
    incognito = 276.8; // uses constructor for conversion
    taft = 325;         // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed ";
    cout << incognito;
    cout << "After dinner, the President weighed ";
    cout << taft;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
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