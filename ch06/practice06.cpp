//
// Created by EDY on 2023/5/16.
//
#include "iostream"
#include "string"
#include "cctype"
#include "array"
#include "fstream"
using namespace std;
/*
int main(void) {
    char ch;
    cout << "Enter text for analysis, and type @ to terminate input:" << endl;
    cin.get(ch);
    while ((ch != '@')) {

        if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }
        if (isdigit(ch) == false) {
            cout << ch;
        }
        cin.get(ch);
    }
    cout << "ok123: " << ch;
    return 0;
}*/
/*
int main() {
    array<double, 10> donationList{};
    double total = 0;
    for (int i = 0; i < 10; ++i) {
        int donation;
        cin >> donation;
        donationList[i] = donation;
        total += donation;
    }
    const double average = total / 10;
    int count = 0;
    for (int j = 0; j < 10; ++j) {
        if (donationList[j] >= average) {
            count++;
        }
    }
    cout << "average is " << average << " " << count;
    return 0;
}*/
/*
char showMenu();
int main() {
    char ch = showMenu();
    switch (ch) {
        case 't': cout << "a maple is tree";
            break;
        case 'p': cout << "a maple is pianist";
            break;
        case 'c': cout << "a maple is carnivore";
            break;
        case 'g': cout << "a maple is game";
            break;
        default : {
            cout << "Please enter a c, p, t, or g: \n";
            showMenu();
        }
    }
    return 0;
}
char showMenu() {
    cout << "Please enter one of the following choices: \n  c) carnivore p) pianist \n t) tree g) game \n";
    char menu;
    cin >> menu;
    return menu;
}*/
/*
void showMenu();
int main() {
    const int strSize = 50;
    struct bop {
        char fullname[strSize];
        char title[strSize];
        char bopName[strSize];
        int preference;
    };
    bop * memberList = new bop[3];
    memberList[0] = {"zack zhang", "worker1", "zhang", 3 };
    memberList[1] = {"wang yin", "worker2", "yin", 2 };
    memberList[2] = {"wuwu", "worker3", "wuwu", 1 };
    showMenu();
    char ch;
    cout << "enter your choice: ";
    cin >> ch;
    while (ch != 'q') {
        switch (ch) {
            case 'a': {
                for (int i = 0; i < 3; ++i) {
                    cout << memberList[i].fullname << endl;
                }
                break;
            }
            case 'b': {
                for (int i = 0; i < 3; ++i) {
                    cout << memberList[i].title << endl;
                }
                break;
            }
            case 'c': {
                for (int i = 0; i < 3; ++i) {
                    cout << memberList[i].bopName << endl;
                }
                break;
            }
            case 'd': {
                for (int i = 0; i < 3; ++i) {
                    if (memberList[i].preference == 1) {
                        cout << memberList[i].fullname << endl;
                    } else if (memberList[i].preference == 2) {
                        cout << memberList[i].title << endl;
                    } else {
                        cout << memberList[i].bopName << endl;
                    }
                }
                break;
            }
            default : {
                cout << "That's not a choice.\n";
            }
        }
        cin >> ch;
    }
    cout << "bye! \n";
    delete [] memberList;
    return 0;
}
void showMenu() {
    cout << "Benevolent Order of Programmers Report: \n a. display by name \t b. display by title \n c. display by bopname \t d. display by preference \n q. quit \n";
}*/
/*
int main() {
    double tax;
    double income;
    while (cin >> income) {
        if (income > 35000) {
            tax = 10000 * 0.10 + 20000 * 0.15 + (income - 35000) * 0.20;
        } else if (income <= 35000 && income > 15001 ) {
            tax = 10000 * 0.10 + (income - 15000) * 0.15;
        } else if (income > 5001 && income <= 15000 ) {
            tax = income * 0.10;
        } else {
            cout << "????";
            tax = 0;
        }
        cout << "tax is: " << tax << endl;
    }
    return 0;
}*/
/*int main() {
    struct donation {
        string name;
        double amount{0};
    };
    int size;
    cout << "please enter donation count: ";
    cin >> size;
    cin.get();
    donation * donationList = new donation [size];
    for (int i = 0; i < size; ++i) {
        cout << "please enter name: ";
        getline(cin, donationList[i].name);
        cout << "please enter amount: ";
        cin >> donationList[i].amount;
        cin.get();
    }
    cout << "grand patrons: \n";
    for (int i = 0; i < size; ++i) {
        if (donationList[i].amount > 10000) {
            cout << donationList[i].name << ", amount is: " << donationList[i].amount << endl;
        }
    }
    cout << "patrons: \n";
    for (int i = 0; i < size; ++i) {
        if (donationList[i].amount <= 10000) {
            cout << donationList[i].name << ", amount is: " << donationList[i].amount << endl;
        }
    }
}*/
int main() {
    const int size = 60;
    char filename[size];
    ifstream inFile;
    cout << "enter name of data file: ";
    cin.getline(filename, size);
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    int count = 0;
    string value;
    while (inFile.good()) {
        ++count;
        inFile >> value;
    }
    inFile.close();         // finished with the file
    cout << "this text is " << count << " characters!";
    return 0;
}