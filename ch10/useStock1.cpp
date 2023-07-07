//
// Created by EDY on 2023/7/3.
//

#include "stock10.h"
#include "iostream"

int main() {
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        Stock stock2("Boffo Objects", 12, 20.0);
        stock2.show();


        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();
    }
    system("pause");

    return 0;
}