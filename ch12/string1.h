//
// Created by EDY on 2023/7/19.
//

#ifndef STRING1_H
#define STRING1_H
#include "iostream"
using std::ostream;
using std::istream;
class String {
private:
    char * str; // pointer to string
    int len; // length of string
    static int num_strings; // number of objects
    static const int CINLIM = 80; // cin input limit
public:
    String(const char * s); // 构造函数
    String(); // 默认构造函数
    String(const String &); // 构造函数拷贝
    ~String(); //析构函数
    int length () const { return len; }
    // 重载运算符
    String & operator=(const String &);
    String & operator=(const char *);
    char& operator[](int i);
    const char& operator[](int i) const;
    // 重载友元运算符
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
    // 静态类函数
    static int HowMany();
};
#endif
