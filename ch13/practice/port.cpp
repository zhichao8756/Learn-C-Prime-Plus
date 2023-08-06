//
// Created by zack on 2023/8/6.
//
#include <iostream>
#include "port.h"
#include "cstring"
Port::Port(const char *br, const char *st, int b) {
    int len = std::strlen(br);
    brand = new char [len + 1];
    std::strcpy(brand, br);
    std::strcpy(style, st);
    bottles = b;
}
Port::Port(const Port &p) {
    int len = std::strlen(p.brand);
    brand = new char [len + 1];
    std::strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p) {
    if(this == &p)
        return *this;
    // delete [] brand;
    int len = std::strlen(p.brand);
    brand = new char [len + 1];
    std::strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port &Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b) {
    if (bottles == 0)
        std::cout << "the wines count is 0";
    else
        bottles -= b;
    return *this;
}

void Port::Show() const {
    std::cout << "brand: " << brand << std::endl;
    std::cout << "style: " << style << std::endl;
    std::cout << "bottles: " << bottles << std::endl;
}
std::ostream & operator<<(ostream & os, const Port & p) {
    os << "brand: " << p.brand << std::endl ;
    os << "style: " << p.style << std::endl;
    os << "bottles: " << p.bottles << std::endl;
}
// derive class
VintagePort::VintagePort(): Port() {
    nickname = new char [1];
    nickname[0] = '\0';
    year = 1993;
}
// 如果少了style参数, 初始化列表如何处理?
VintagePort::VintagePort(const char *br, const char *st, int b, const char *nn, int y): Port(br, st, b) {
    int len = std::strlen(nn);
    nickname = new char [len + 1];
    std::strcpy(nickname, nn);
    year = y;
}
VintagePort::VintagePort(const VintagePort &vp): Port(vp) {
    int len = std::strlen(vp.nickname);
    nickname = new char [len + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}
VintagePort &VintagePort::operator=(const VintagePort &vp) {
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    int len = std::strlen(vp.nickname);
    nickname = new char [len + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const {
    Port::Show();
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "year: " << year << std::endl;
}
std::ostream & operator<<(ostream & os, const VintagePort & vp) {
    // 强制类型向上转换
    os << (const Port&)vp;
    os << "nickname: " << vp.nickname << std::endl ;
    os << "year: " << vp.year << std::endl;
}