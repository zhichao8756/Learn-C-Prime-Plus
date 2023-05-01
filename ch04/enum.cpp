//
// Created by zack on 2023/5/1.
//
#include <iostream>
enum season { spring, summer = 100, fall = 96, winter };
typedef enum {
    mon, tue, wed, thr, fri
} weekday;
int main () {
    using namespace std;
    int x, y, z;
    cout << spring << endl << summer << endl << fall << endl << winter << endl;
    season myseason = winter;
    if (winter == myseason)
        cout << "my season is winter";
//    yesterday = mon;
//    today = tue;
//    tomorrow = fri;
//    cout << yesterday << endl << today << endl << tomorrow;
    return 0;
}