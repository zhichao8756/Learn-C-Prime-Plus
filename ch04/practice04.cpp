//
// Created by EDY on 2023/5/12.
//
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;
/*int main() {
    string firstName;
    string lastName;
    char grade;
    int age;
    cout << "what your first name ? " << endl;
    getline(cin, firstName);
    cout << "What letter grade do you deserve?" << endl;
    cin >> grade;
    cout << "What is your age?" << endl;
    cin >> age;
    cout << "name: " << firstName << endl;
    grade = grade + 1;
    cout << "grade: " << grade << endl;
    cout << "age: " << age << endl;
    return 0;
}*/
/*
int main () {
    string firstName;
    char lastName[20];
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Here’s the information in a single string: " << firstName << "," << lastName;
    return 0;
}*/

int main () {
    struct candyBar {
        string brand;
        float weight;
        int calorie;
    };
    candyBar snack1 = {
            "Mocha Mocha",
            2.3,
            300
    };
    candyBar snack2 = {
            "Mocha Mocha2",
            10.32,
            300
    };
    candyBar snack3 = {
            "Mocha Mocha3",
            9.32,
            600
    };
//    candyBar snackList[3] = {
//            snack1, snack2, snack3
//    };
    candyBar * snackPtr = new  candyBar [3];
    snackPtr[0] = snack1;
    snackPtr[1] = snack2;
    snackPtr[2] = snack3;
    cout << "candy brand: " << (*snackPtr).brand << endl;
    cout << "weight is: " << snackPtr[1].weight << endl;
    cout << "calorie is: " << snackPtr[2].calorie;
    delete [] snackPtr;
    return 0;
}
/*
int main () {
    struct pizzaParams {
            string companyName;
            float radius;
            float weight;
    };
    pizzaParams * pizza = new pizzaParams;
    cout << "enter pizza radius: ";
    cin >> (*pizza).radius;
    cin.get();
    cout << "enter pizza company name: ";
    getline(cin, pizza -> companyName);

    cout << "enter pizza weight: ";
    cin >> pizza -> weight;
    cout << "pizza company name is: " << pizza -> companyName << endl;
    cout << "pizza radius is: " << (*pizza).radius << endl;
    cout << "pizza weight is: " << pizza -> weight << endl;
    delete pizza;
    return 0;
}*/
