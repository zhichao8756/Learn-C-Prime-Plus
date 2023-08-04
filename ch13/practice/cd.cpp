//
// Created by EDY on 2023/8/4.
//
#include "cd.h"
#include "iostream"
#include "cstring"
Cd::Cd() {
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}
Cd::Cd(const char *s1, const char *s2, int n, double x) {
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d) {
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::~Cd() {}
Cd & Cd::operator=(const Cd &d) {
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
void Cd::Report() const {
    std::cout << "performer is " << performers << std::endl;
    std::cout << "label is " << label << std::endl;
    std::cout << "selection is " << selections << std::endl;
    std::cout << "playtime is " << playtime << std::endl;
}
// classic class
Classic::Classic(const char *name, const char *s1, const char *s2, int n, double x): Cd(s1, s2, n ,x) {
    std::strcpy(cdName, name);
}
Classic::Classic(): Cd() {
    strcpy(cdName,"null");
}
void Classic::Report() const {
    Cd::Report();
    std::cout << "cd name is " << cdName << std::endl;
}

Classic &Classic::operator=(const Classic &d) {
    Cd::operator=(d);
    strncpy(cdName, d.cdName,49);
    return *this;
}