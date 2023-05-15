//
// Created by EDY on 2023/5/5.
//
#include <iostream>
struct inflatable {
    char name[20];
    float volume;
    double price;
};
int main () {
    using namespace std;
    inflatable * ps = new inflatable;
    cout << "enter name of inflatable item:" << endl;
    cin.get(ps -> name, 20);
    cout << "enter volume of inflatable item:" << endl;
    cin >> (*ps). volume;
    cout << "enter price: &";
    cin >> ps -> price;
    cout << "Name: " << (*ps).name << endl;                 // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    cout << "Price: $" << ps->price << endl;               // method 1
    delete ps;
    return 0;
}