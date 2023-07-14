//
// Created by EDY on 2023/7/14.
//
#include "mytime0.h"
#include "iostream"
Time::Time() {
    minutes = 0;
    hours = 0;
}
Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}
void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time::AddHr(int h)
{
    hours += h;
}
void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}
/*Time Time::Sum(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}*/
Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = this->minutes + t.minutes;
    sum.hours = this->hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}