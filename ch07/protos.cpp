//
// Created by EDY on 2023/5/17.
//
#include "iostream"
void cheers(int);
double cube(double x);
int main() {
    using namespace std;
    cheers(5);
    cout << "give me a number " << endl;
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << ".....";
    cout << volume << "cube.....";
    cheers(cube(2));
    return 0;
}
void cheers(int n) {
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}
double cube(double x) {
    return x * x;
}