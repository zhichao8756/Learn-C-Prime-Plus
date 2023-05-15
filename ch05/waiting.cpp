//
// Created by zack on 2023/5/14.
//
#include <iostream>
int main() {
    using namespace std;
    cout << "please enter you sec: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << delay << endl;
    cout << "starting: \a\n";
    clock_t start = clock();
    cout << start << endl;
    while (clock() - start < delay);
        cout << "ok lets go";
    return 0;
}