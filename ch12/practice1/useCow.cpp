//
// Created by EDY on 2023/7/27.
//
#include "cow.h"
#include "iostream"
int main() {
    using namespace std;
    Cow zack("zack", "payd", 12);
    zack.ShowCow();
    Cow newzack = zack;
    cout << "new newzack Object is: " << endl;
    newzack.ShowCow();
    system("pause");
    return 0;
}