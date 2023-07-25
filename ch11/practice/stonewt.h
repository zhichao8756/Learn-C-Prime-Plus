//
// Created by EDY on 2023/7/14.
//

#ifndef STONEWT_H_
#define STONEWT_H_
#include "ostream"
class Stonewt {
public:
    enum Format { st, intp, doublep };
private:
    enum { Lbs_per_stn = 14 };  // pounds per stone
    int stone;  // whole stones
    double pds_left; // fractional pounds
    double pounds;  // entire weight in pounds
    Format m_form;
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    // void show_lbs() const;        // show weight in pounds format
    // void show_stn() const;        // show weight in stone format
    void SetFormat(Format form);
    friend bool operator>(const Stonewt& s1, const Stonewt& s2);
    friend bool operator<(const Stonewt& s1, const Stonewt& s2);
    friend bool operator>=(const Stonewt& s1, const Stonewt& s2);
    friend bool operator<=(const Stonewt& s1, const Stonewt& s2);
    friend bool operator==(const Stonewt& s1, const Stonewt& s2);
    friend bool operator!=(const Stonewt& s1, const Stonewt& s2);

    friend std::ostream & operator<<(std::ostream & os, const Stonewt & t);

    // conversion functions
    operator int() const;
    operator double() const;
};
#endif
