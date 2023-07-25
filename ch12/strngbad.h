//
// Created by EDY on 2023/7/18.
//

#ifndef STRNGBAD_H
#define STRNGBAD_H
#include "iostream"
class StringBad {
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad(const char * s);
    StringBad();
    ~StringBad();
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif