//
// Created by EDY on 2023/5/15.
//
#include "iostream"
#include "cstring"
#include "string"

using namespace std;
/*int main() {
    using namespace std;
    int min;
    int max;
    int total = 0;
    cin >> min;
    cin >> max;
    for (int i = min; i <= max; ++i) {
        total += i;
    }
    cout << "total is: " << total;
    return 0;
}*/
/*
int main() {
    using namespace std;
    int num;
    int count = 0;
    while (cin >> num && num) {
        count += num;
        cout << "this total is: " << count << endl;
    }
    cout << endl << count << " is end \n";

    return 0;
}*/
/*int main() {
    using namespace std;
    double principal = 100.0;
    double profit1 = 100.0 * 0.1;
    cout << profit1 << endl;
    double total1 = principal + profit1;

    double profit2 = 100.0 * 0.05;
    double total2 = principal + profit2;
    int year = 2;
    while (total2 < total1) {
        total1 += profit1;
        total2 += (total2 + profit2) * 0.05;
        year++;
        cout << "total1 is: " << total1 << endl;
        cout << "total2 is: " << total2 << endl;
        cout << "this is: " << year << " year" << endl;
    }
    return 0;
}*/
/*
int main() {
    const int years = 12;
    int * arr = new int [12];
    int total = 0;
    string months[12] = {
            "jan", "feb", "mar", "apr", "May", "June", "july", "August", "September", "Oct", "Nov", "Dec"
    };
    for (int i = 0; i < years; ++i) {
        cin >> arr[i];
        cout << "this is " <<  * (months + i) << endl;
        cout << "sales is " <<  arr[i] << endl;
        total += arr[i];
    }
    cout << total;
    return 0;
}*/

/*
int main() {
    struct carProduct {
        string brand;
        int year;
    };
    int count;
    cout << "How many cars do you wish to catalog? " << endl;
    cin >> count;
    cin.get();
    carProduct * arr = new carProduct [count];
    for (int i = 0; i < count; ++i) {
        cout << "Car #" << i + 1 << ": \n";
        cout << "Please enter the make: ";
        getline(cin, arr[i].brand);
        cout << "Please enter the year made: ";
        cin >> arr[i].year;
        cin.get();
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << arr[i].year <<  " " << arr[i].brand << endl;
    }
    delete [] arr;
    return 0;
}*/
/*
int main() {
    using namespace std;
    int count = 0;
    const int maxsize = 25;
    char words[] = {};
    cin >> words;
    for (int i = 0; strcmp(words, "done"); ++i) {
        count++;
        cin >> words;
    }
    cout << words << endl;
    cout << "total word is " << count;
    return 0;
}*/
int main() {
    using namespace std;
    int count = 0;

    string words = {};
    getline(cin, words);
    for (int i = 0; words != "done"; ++i) {
        cout << words;
        cout << i;
        count++;
        getline(cin, words);    }
    cout << words << endl;
    cout << "total word is " << count;
    return 0;
}