//
// Created by EDY on 2023/8/4.
//
#include "cd.h"
#include "iostream"
#include "cstring"
Cd::Cd() {
    performers = new char[1];
    performers[0] = '\0';
    label = new char [1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}
Cd::Cd(const char *s1, const char *s2, int n, double x) {
    int len = std::strlen(s1);
    performers = new char [len + 1];
    std::strcpy(performers, s1);
    int len_label = std::strlen(s2);
    label = new char [len_label + 1];
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
Cd::~Cd() {
    delete [] label;
    delete [] performers;
}
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
    int len = std::strlen(name);
    cdName = new char [len + 1];
    std::strcpy(cdName, name);
}
Classic::Classic(): Cd() {
    cdName = new char [1];
    cdName[0] = '\0';
    strcpy(cdName,"null");
}
void Classic::Report() const {
    Cd::Report();
    std::cout << "cd name is " << cdName << std::endl;
}
Classic::~Classic() {
    delete [] cdName;
}
Classic &Classic::operator=(const Classic &d) {
    Cd::operator=(d);
    strncpy(cdName, d.cdName,49);
    return *this;
}