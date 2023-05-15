//
// Created by EDY on 2023/5/5.
//
#include <iostream>
#include <cstring>
int main () {
    using namespace std;
    char animal[20] = {"bird"};
    const char * bird = "wren";
    char * ps;
    cout << animal << endl;
    cout << bird << endl;
    // cout << ps;

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << endl;
    cout << animal << " at " << (int * ) animal << endl;
    cout << &animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    cout << ps << " at1111 " << endl;
    strcpy(ps, animal);
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}