//
// Created by EDY on 2023/5/18.
//
#include "iostream"
struct travel_time {
    int hours;
    int minutes;
};
const int Mins_per_hr = 60;
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);
int main() {
    travel_time day1 = {5, 10}; // 5 hrs, 45 min
    travel_time day2 = {4, 20}; // 4 hrs, 55 min
    travel_time trip = sum(day1, day2);
    show_time(trip);
    return 0;
}
travel_time sum(travel_time t1, travel_time t2) {
    using namespace std;
    int total_hours = 0;
    int total_mins = 0;
    total_hours = t1.hours + t2.hours + (t1.minutes + t2.minutes) / Mins_per_hr;
    total_mins =  (t1.minutes + t2.minutes) % Mins_per_hr;
    cout << (t1.minutes + t2.minutes) % Mins_per_hr << endl;
    travel_time total = {
            total_hours,
            total_mins
    };
    return total;
}
void show_time(travel_time t)
{
    using namespace std;
    cout << t.hours << " hours, "
         << t.minutes << " minutes\n";
}
