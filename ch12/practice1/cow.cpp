//
// Created by EDY on 2023/7/26.
//
#include "cow.h"
#include "cstring"
#include "iostream"
Cow::Cow() {
    std::strcpy(name, "zack");
    name[0] = '\0';
    hobby = new char [1];
    hobby[0] = '\0';
    weight = 100;
}
Cow::Cow(const char *nm, const char *ho, double wt) {
    std::strcpy(name, nm);
    int len = std::strlen(ho);
    hobby = new char [len + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}
Cow::Cow(const Cow &c) {
    std::strcpy(name, c.name);
    int len = std::strlen(c.hobby);
    hobby = new char[len + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}
Cow::~Cow() {
    delete [] hobby;
}

Cow & Cow::operator=(const Cow &c) {
    std::strcpy(name, c.name);
    delete [] hobby;
    int len = std::strlen(c.hobby);
    hobby = new char[len + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    std::cout << "my name is: " << this->name << std::endl;
    std::cout << "my hobby is: " << this->hobby << std::endl;
    std::cout << "my weight is: " << this->weight << std::endl;

}