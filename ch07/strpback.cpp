//
// Created by EDY on 2023/5/18.
//
#include "iostream"
char * buildstr(char c, int n);
using namespace std;
int main() {
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps; // free memory
    ps = buildstr('+', 20); // reuse pointer
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps; // free memory
    return 0;
}
char * buildstr(char c, int n) {
    char * ptr = new char[n + 1];
    ptr[n] = '\0';
    while (n-- > 0) {
        ptr[n] = c;
    }
    int *pt = new int[3];
    pt[0] = 5;
    pt[1] = 44;
    pt[2] = 67;
    cout << *pt << endl;
    cout << *ptr << endl;
    return ptr;
}