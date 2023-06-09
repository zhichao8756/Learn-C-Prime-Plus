//
// Created by EDY on 2023/5/19.
//
#include "iostream"
#include "array"
#include "string"
using namespace std;
 const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
void fill(array<double, Seasons> * pa);
void show(array<double, Seasons>  da);
int main() {
    array<double, Seasons> expenses{};
    fill(&expenses);
    array<double, Seasons> dad{};
    show(expenses);
    return 0;
}
void fill(array<double, Seasons> * pa) {
    for (int i = 0; i < Seasons; ++i) {
        cout << "enter " << Snames[i] << " expenses: ";
    }
}
void show(array<double, Seasons>  da) {
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}