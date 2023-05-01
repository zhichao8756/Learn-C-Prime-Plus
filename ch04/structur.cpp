//
// Created by zack on 2023/5/1.
//
#include <iostream>
#include <string>
using namespace std;
struct inflatable {
    string name;
    float volume;
    double price;
};
int main () {
//    inflatable guest = {
//            "zack zhang",
//            1.88,
//            90.23
//    };
    inflatable guest = {

    };
    guest.name = "zzc122";
    inflatable pal = {
            "wangyin",
            9.22,
            322
    };
    cout << "expand...." << guest.name << endl;
    cout << "and " << pal.name << endl;
    cout << "total price..." << guest.price + pal.price;
    return 0;
}