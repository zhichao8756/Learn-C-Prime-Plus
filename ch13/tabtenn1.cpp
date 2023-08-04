//
// Created by EDY on 2023/8/3.
//
#include "tabtenn1.h"
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
RatedPlayer::RatedPlayer(unsigned int r, const std::string &fn, const std::string &ln, bool ht): TableTennisPlayer(fn, ln, ht) {
    rating = r;
}
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp): TableTennisPlayer(tp), rating(r) {}