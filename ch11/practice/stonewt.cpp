//
// Created by EDY on 2023/7/14.
//
#include "stonewt.h"
#include "iostream"
using std::cout;

// construct Stonewt object from double value
Stonewt::Stonewt() // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}
Stonewt::Stonewt(double lbs) {
    stone = int (lbs) / Lbs_per_stn; // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}
// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
}
Stonewt::~Stonewt() // destructor
{
}
/*void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}
// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}*/
bool operator>(const Stonewt& s1, const Stonewt& s2)
{
    if (s1.pounds > s2.pounds)
        return true;
    else
        return false;
}
bool operator<(const Stonewt& s1, const Stonewt& s2)
{
    if (s1.pounds < s2.pounds)
        return true;
    else
        return false;
}
bool operator>=(const Stonewt& s1, const Stonewt& s2)
{
    if (s1.pounds >= s2.pounds)
        return true;
    else
        return false;
}
bool operator<=(const Stonewt& s1, const Stonewt& s2)
{
    if (s1.pounds <= s2.pounds)
        return true;
    else
        return false;
}
bool operator==(const Stonewt& s1, const Stonewt& s2)
{
    if (s1.pounds == s2.pounds)
        return true;
    else
        return false;
}
bool operator!=(const Stonewt& s1, const Stonewt& s2)
{
    if (s1.pounds != s2.pounds)
        return true;
    else
        return false;
}
std::ostream & operator<<(std::ostream & os, const Stonewt & s) {
//    os << t.stone << " stone, " << t.pds_left << "  pounds\n";
//    os << t.pounds << " pounds\n";
    if (s.m_form == Stonewt::st)
    {
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    }
    else if (s.m_form == Stonewt::intp)
    {
        os << int(s.pounds) << " pounds\n";
    }
    else if (s.m_form == Stonewt::doublep)
    {
        os << s.pounds << " pounds\n";
    }
    else
        os << "Stonewt state is invalid";
    return os;
}
// conversion functions
Stonewt::operator int() const
{

    return int (pounds + 0.5);

}

Stonewt::operator double()const
{
    return pounds;
}