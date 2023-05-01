//
// Created by zack on 2023/5/1.
//
#include <iostream>
struct inflatable {
    char name[20];
    float volume;
    double price;
};
int main () {
    using namespace std;
    inflatable arr[2] = {
            {"zack zhang",9.2,90},
            {"zzc", 8.87, 94.22             }
    };
    cout << "the guests " << arr[0].name << " and " << arr[1].name << endl;
    return 0;
}