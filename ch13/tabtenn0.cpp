//
// Created by EDY on 2023/8/2.
//
#include "tabtenn01.h"
#include "iostream"
TableTennisPlayer::TableTennisPlayer(const std::string &fn, const std::string &ln, bool ht) {
    firstname = fn;
    lastname = ln;
    hasTable = ht;
}
void TableTennisPlayer::Name() const
{
    std::cout << lastname << ",  "<< firstname;
}