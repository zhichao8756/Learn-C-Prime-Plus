//
// Created by EDY on 2023/6/6.
//
// external.cpp -- external variables
// compile with support.cpp
#include <iostream>
using namespace std;
// external variable
double warming = 0.3; // warming defined
// function prototypes
void update(double dt);
void local();

int main()               // uses global variable
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);       // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();            // call function with local warming
    cout << "Global warming is " << warming << " degrees.\n";
    system("pause");
    return 0;
}
/*
#include "iostream"
using namespace std;
// external variable
double warming = 0.3;
// function prototypes
void update(double dt);
void local();
int main() {
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);       // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();            // call function with local warming
    cout << "Global warming is " << warming << " degrees.\n";
    return 0;
}*/
