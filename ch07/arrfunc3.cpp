//
// Created by EDY on 2023/5/17.
//
#include "iostream"
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n); // don't change
void revalue(double r, double arr[], int n);
int main() {
    using namespace std;
    const int max = 5;
    double properties[max];
    int size = fill_array(properties, max);
    // cout << "this is properties" << properties[0] << endl;
    show_array(properties, max);
    if (size > 0) {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, max);
        show_array(properties, size);
    }
    cout << "Done. \n";
    return 0;
}
int fill_array(double ar[], int limit) {
    using namespace std;
    double temp;
    int i;
    for ( i = 0; i < limit; ++i) {
        cout << "enter value # " << i + 1 << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "bad input; input process terminated. \n";
            break;
        } else if (temp < 0) {
            cout << "error" << endl;
            break;
        }
        ar[i] = temp;
    }
    return i;
}
void show_array(const double arr[], int n) {
    using namespace std;
    for (int i = 0; i < n; ++i) {
        cout << "property #: " << (i + 1) << ": $";
        cout << arr[i] << endl;
    }
}
void revalue(double r, double arr[], int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] *= r;
    }
}