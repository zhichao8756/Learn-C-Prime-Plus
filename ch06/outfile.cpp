//
// Created by EDY on 2023/5/15.
//
#include "iostream"
#include "fstream"
int main() {
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    ofstream outfile;
    outfile.open("carinfo.txt");
    cout << "enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "enter the mobile year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    // display information on screen with cout
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // now do exact same things using outFile instead of cout

    outfile << fixed;
    outfile.precision(2);
    cout.setf(ios_base::showpoint);

    outfile << "Make and model: " << automobile << endl;
    outfile << "Year: " << year << endl;
    outfile << "Was asking $" << a_price << endl;
    outfile << "Now asking $" << d_price << endl;
    outfile.close();
    return 0;
}