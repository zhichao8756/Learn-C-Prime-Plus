//
// Created by EDY on 2023/4/23.
//
#include <iostream>
int stoneolb(int);
int main () {
    using namespace std;
    int stone;
    cout << "enter the weight in stone" << endl;
    cin >> stone;
    int pounds = stoneolb(stone);
    cout << "pounds is " << pounds << endl;
}
int stoneolb(int sts) {
    int pounds;
    pounds = sts * 14;
    return pounds;
};