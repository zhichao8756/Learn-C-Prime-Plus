//
// Created by zack on 2023/5/23.
//
#include "iostream"
#include "string"
#include "cctype"
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
string str_toupper(string &str);
int main() {
    string str;
    getline(cin, str);
    while (str != "q") {
        string upperStr = str_toupper(str);
        cout << upperStr << endl;
        getline(cin, str);
    }
    cout << "Bye;";
    return 0;
}
string str_toupper(string &str) {
    for (int i = 0; i < str.size(); ++i) {
       str[i] = toupper(str[i]);
    }
    return str;
}