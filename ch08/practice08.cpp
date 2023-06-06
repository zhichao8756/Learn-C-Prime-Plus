//
// Created by zack on 2023/5/23.
//
#include "iostream"
#include "string"
#include "cstring"
using namespace std;
/*
void printString(const char * str, int n);
int main() {
    char str[10] = "zack";
    printString(str, 3);
    return 0;
}
void printString(const char * str, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << str << std::endl;
    }
}*/
/*
struct CandyBar {
    string brand;
    double weight;
    int calories;
};
CandyBar candy_info(CandyBar * snacks, const string &brand, double  weight, int calories );
void show_candy(const CandyBar * snacks);
int main() {
    CandyBar snacks {};
    CandyBar bar{};
    string brand= "zack";
    double weight = 23.12;
    int calories = 213;
    bar = candy_info(&snacks, brand, weight, calories);
    show_candy(&bar);
    return 0;
}
CandyBar candy_info( CandyBar * snacks, const string &brand, double  weight, int calories ) {
    snacks->brand = brand;
    snacks->weight = weight;
    snacks->calories = calories;
    return *snacks;
    // snacks->brand  brand
}
void show_candy(const CandyBar * snacks) {
    cout << snacks->brand << endl;
    cout << snacks->weight << endl;
    cout << snacks->calories << endl;
}*/
/*
struct stringy {
    char * str;     // points to a string
    int ct;         // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void show(const stringy &beany, int n = 1);
void show(const char* str, int n = 1);

void set(stringy &beany, const char * str);
int main()
{
    stringy beany{};
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing); // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany
    show(beany);    // prints member string once
    show(beany, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);    // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    return 0;
}
void set(stringy &beany, const char * str) {
    beany.str = new char;
    strcpy_s(beany.str,beany.ct,  str);
    beany.ct = strlen(str) + 1;
}
void show(const stringy & beany, int n) {
    for (int i = 0; i < n; ++i) {
        cout << beany.str << endl;
    }
}
void show(const char * str, int n) {
    for (int i = 0; i < n; ++i) {
        cout << str << endl;
    }
}*/
template <typename T>
T max5(T *arr);

int main() {
    int arr[5] = {2,4,5,14,2};
    double arr2[5] = {1.3,3.2,4.5,11.3,56.1};
    int max1 = max5(arr);
    double max2 = max5(arr2);
    cout << max1 << endl;
    cout << max2 << endl;
    return 0;
}
template <typename T>
T max5(T *arr) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (arr[j] > arr[j+1]) {
                int a = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = a;
            }
        }
    }
    return arr[4];
}
