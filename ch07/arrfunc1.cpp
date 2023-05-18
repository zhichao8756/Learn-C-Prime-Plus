//
// Created by EDY on 2023/5/17.
//
#include "iostream"
const int arrSize = 8;
int sum_arr(const int arr[], int n);
int main() {
    using namespace std;
    int cookies[arrSize] = { 1,2,4,8,16,32,64,128 };
    int sum = sum_arr(cookies, arrSize);
    cout << "Total cookies eaten: " << sum << "\n";
    return 0;
}
int sum_arr(const int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }
    return total;
}