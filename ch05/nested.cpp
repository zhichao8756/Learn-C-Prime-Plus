//
// Created by EDY on 2023/5/15.
//
#include "iostream"
int main() {
    using namespace std;
    const int Cities = 5;
    const int Years = 4;
    const char * cities[Cities] = {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    int maxtemps[Years][Cities] = {
        {96, 100, 87, 101, 105},  // values for maxtemps[0]
        {96, 98, 91, 107, 104},   // values for maxtemps[1]
        {97, 101, 93, 108, 107}, // values for maxtemps[2]
        {98, 103, 95, 109, 108}   // values for maxtemps[3]
    };
    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city) {
        cout << cities[city] << ":\t";
        for (int temp = 0; temp < Years; ++temp) {
            cout << maxtemps[city][temp] << "\t";
        }
        cout << endl;
    }
    return 0;
}