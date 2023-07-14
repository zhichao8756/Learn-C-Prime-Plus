//
// Created by EDY on 2023/7/13.
//

#ifndef PLORG_H
#define PLORG_H
#include "string"
class Plorg {
private:
    static const int LIMIT = 19;
    char Name1[LIMIT];
    int ci;
public:
    Plorg(const char *name, int ci);
    void modifyName(int ci);
    void showInfo();

};
#endif
