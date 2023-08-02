//
// Created by EDY on 2023/7/26.
//

#ifndef COW_H
#define COW_H
class Cow {
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const; // display all cow data
};
#endif //LEARN_C_PRIME_PLUS_COW_H
