//
// Created by EDY on 2023/5/19.
//
#include "iostream"
#include "cmath"
struct polar {
    double distance;
    double angel;
};
struct rect {
    double x;
    double y;
};
using namespace std;
void show_polar(const polar * dapos);
polar rect_to_polar(const rect * xypos);
int main() {
    rect rplace{};
    polar pplace{};
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {
        pplace = rect_to_polar(&rplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done. \n";
    return 0;
}
void show_polar(const polar * dapos) {
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos->distance ;
    cout << " , angel = " << dapos->angel * Rad_to_deg ;
    cout << " degrees \n";
}
polar rect_to_polar(const rect * xypos) {
    polar answer{};
    answer.distance = sqrt( xypos->x * xypos->x + xypos->y * xypos->y);
    answer.angel = atan2(xypos->y, xypos->x);
    return answer;
}