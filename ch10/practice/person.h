//
// Created by EDY on 2023/7/7.
//

#ifndef PERSON_H
#define PERSON_H
#include "string"
class Person {
private:
    static const int LIMIT = 25;
    std::string lname;      // Person’s last name
    char fname[LIMIT]; // Person’s first name
public:
    Person() {lname = ""; fname[0] = '\0'; } // #1
    Person(const std::string & ln, const char * fn = "Heyyou"); // #2
// the following methods display lname and fname
    void Show() const;       // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};
#endif
