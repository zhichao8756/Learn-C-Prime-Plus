//
// Created by EDY on 2023/4/25.
//
#include <iostream>
int main () {
    using namespace std;
    float hats, heads;
    cout.setf(ios_base::fixed, ios_base::floatfield); //fixed point
    cout << "Enter a number: " << endl;
    cin >> hats;
    cout << "Enter a number " << endl;
    cin >> heads;
    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads= " << hats + heads << endl;
    cout << "hats - heads= " << hats - heads << endl;
    cout << "hats * heads= " << hats * heads << endl;
    cout << "hats / heads= " << hats / heads << endl;
    return 0;
}