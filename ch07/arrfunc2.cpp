//
// Created by EDY on 2023/5/17.
//
#include "iostream"
const int arrSize = 8;
int sum_arr(const int * begin, const int * end); // arr is a pointer
int main() {
    int cookies[arrSize] = { 1,2,4,8,16,32,64,128 };
    std::cout << (* (cookies + 2)) << std::endl;
    std::cout << cookies << " = array address, \n";
    std:: cout << sizeof(cookies) << " = size of cookies \n";
    int sum = sum_arr(cookies, cookies + arrSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, cookies + 3); // a lie
    std::cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, cookies + 8); // another lie
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}
int sum_arr(const int * begin, const int * end) {
    int total = 0;
    const int * pt;
    std::cout << "sddsss " << pt << std::endl;
    for (pt = begin; pt < end; ++pt) {
        std::cout << "zzzzz " << *pt << std::endl;
        total = total +  *pt;
    }
    return total;
}