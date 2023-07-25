//
// Created by EDY on 2023/7/18.
//
#include "strngbad.h"
#include "iostream"
using namespace std;

void callme1(StringBad &);
void callme2(StringBad);
int main() {
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";

    }
    cout << "End of main()\n";
    system("pause");
    return 0;
}
void callme1(StringBad & rsb) {
    cout << "String passed by reference:\n";
    cout << rsb;
}
void callme2 (StringBad sb) {
    cout << "String passed by value:\n";
    cout << sb;
}