//
// Created by EDY on 2023/8/4.
//

#ifndef ACCTABC_H
#define ACCTABC_H
#include "iostream"
#include "string"
using std::string;
class AcctABC {
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const string & FullName() const {return fullName;}
    long AcctNum() const {return acctNum;}
    Formatting SetFormat() const;
    void Restore(Formatting & f) const;
public:
    AcctABC(const string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0; // pure virtual function
    double Balance() const {return balance;};
    virtual void ViewAcct() const = 0; // pure virtual function
    virtual ~AcctABC() {}
};
#endif
