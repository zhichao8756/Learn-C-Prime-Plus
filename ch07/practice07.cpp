//
// Created by zack on 2023/5/21.
//
#include "iostream"
using namespace std;
// practice 01
/*
double calculate(int x, int y);
int main() {
    int x, y;
    double result;
    while (cin >> x >> y && ((x > 0) && (y > 0))){
        result = calculate(x, y);
        cout << "result is: " << result << endl;
    }
    cout << "Done!";
}
double calculate(int x, int y) {
    const double result = 2.0 * x * y / (x + y);
    return result;
}*/
// practice02
/*
int fill_array(double * arr, int max);
void show_scores(const double * arr, int times);
double calculate(const double * arr, int times);
const int size = 10;
int main() {
    double arr[size] = {};
    double average = 0;
    int times = fill_array(arr, size);
    show_scores(arr, times);
    average = calculate(arr,  times);
    cout << "average is: " << average;
    return 0;
}
int fill_array(double * arr, int max) {
    double temp;
    int i;
    cout << "please enter scores, enter 0 to finish: ";
    for (i = 0; i < max; ++i) {
        cin >> temp;
        if (temp == 0) {
            break;
        }
        *(arr + i)= temp;
    }
    return i;
}
void show_scores(const double * arr, int times) {
    for (int i = 0; i < times; ++i) {
        cout << "the scores is: " << * (arr + i) << endl;
    }
}
double calculate(const double * arr, int times) {
    double total = 0;
    double average = 0;
    for (int i = 0; i < times; ++i) {
        cout << "the scores is: " << * (arr + i) << endl;
        total += * (arr + i);
    }
    return average = total / times;
}*/
// practice 03
/*struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
const int size = 3;
void show_info(box arr);
void show_info2(box * arr);
int main() {
    box arr = {
            "zzc",
            30,
            40,
            100,
            10
    };
    show_info(arr);
    show_info2(&arr);
    return 0;
}
void show_info(box arr) {
    cout << arr.maker << endl;
    cout << arr.height << endl;
    cout << arr.width << endl;
    cout << arr.length << endl;
    cout << arr.volume << endl;
}
void show_info2(box * arr) {
    arr->volume = arr->height * arr->width * arr->length;
    cout << arr->volume << endl;
}*/
// parctice04
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices, rate1, rate2;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        // cout << probability(total, choices); // compute the odds
        rate1 = probability(total, choices);
        rate2 = probability(total, choices);
        cout << rate1 * rate2;
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}