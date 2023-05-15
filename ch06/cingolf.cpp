//
// Created by EDY on 2023/5/15.
//
#include "iostream"
int main() {
    using namespace std;
    const int max = 5;
    int golf[max];
    cout << "please enter golf scores: \n";
    cout << "you must enter " << max << " times";
    int i;
    for (i = 0; i < max; ++i) {
        cout << " round #: " << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Please enter a number: ";
        }
    }
    double total = 0.0;
    for (int j = 0; j < max; ++j) {
        total += golf[i];
    }
    cout << total / max << " = average score " << max << " rounds\n";
    return 0;
}