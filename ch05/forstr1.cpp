//
// Created by zack on 2023/5/14.
//
#include "iostream"
#include "string"
int main() {
    using namespace std;
    cout << "enter a word ";
    string word;
    cin >> word;
    for (int i = word.size(); i >= 0 ; i--) {
        cout << word[i];
    }
    return 0;
}