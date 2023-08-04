//
// Created by EDY on 2023/8/4.
//

#ifndef CD_H
#define CD_H
// base class
class Cd { // represents a CD disk
private:
    char performers[50];
    char label[20];
    int selections;  // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const char * s1,  const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report() const; // reports all CD data
    Cd & operator=(const Cd & d);
};
class Classic: public Cd {
private:
    char cdName[50];
public:
    Classic(const char * name , const char * s1, const char * s2, int n, double x);
    Classic();
    virtual void Report() const; // reports all CD data
    Classic & operator=(const Classic & d);

};
#endif
