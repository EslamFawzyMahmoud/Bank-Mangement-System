//
// Created by we on 1/22/2021.
//

#ifndef BANK_MANGEMENT_BANKACCOUNT_H
#define BANK_MANGEMENT_BANKACCOUNT_H

#include <bits/stdc++.h>
using namespace std;
class BankAccount {
private:
    AccountOwner accountowner;
protected:
    int NumberOfDeposits=0,NumberOfWithdraw=0;
    double Balance=0.0,AnnualInterestRate,MonthlyServiceCharges=0;
    double Monthly_Interest_Rate{},Monthly_Interest{};

public:
    BankAccount();//empty constructor
    BankAccount(AccountOwner account,double balance, double AnnualInterestRate);//parameter constructor

    virtual void Deposit(double Value);
    virtual void WithDraw(double Value);
    virtual void calcInt();
    virtual void monthlyProc();
    double getBalance();
    double getCharges();
    double getDeposits();
    double getWithdraws();
};


#endif //BANK_MANGEMENT_BANKACCOUNT_H
