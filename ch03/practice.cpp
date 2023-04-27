//
// Created by EDY on 2023/4/25.
//
#include <iostream>
int main () {
    using namespace std;
    long seconds;
    cout << "Enter your seconds: " << endl;
    cin >> seconds;
    int days, hours, minutes, second;
    days = seconds / (3600 * 24);
    cout << seconds % (24 * 3600) << endl;
    hours= seconds % (24 * 3600) / 3600;
    minutes = seconds % 3600 / 60;
    second = seconds % 60;
    cout << seconds << " = " << days << " days, " << hours << " hours, ";
    cout << minutes << second;
    return 0;
}