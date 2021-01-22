//
// Created by we on 1/22/2021.
//

#ifndef BANK_MANGEMENT_SAVINGSACCOUNT_H
#define BANK_MANGEMENT_SAVINGSACCOUNT_H


#include"BankAccount.h"
#include <bits/stdc++.h>


class SavingsAccount:public BankAccount{
    using BankAccount::BankAccount;

private:
    /// this variables is to know the status of savings acounts
    bool status;
    bool active=1;
    bool inactive=0;
    int FinalNumber;

public:
    SavingsAccount();
    bool getStatus();
    void CheckStatues();
    void WithDraw(double Value);
    void Deposit(double Value);
    void monthlyProc();
    double getBalance();
};


#endif //BANK_MANGEMENT_SAVINGSACCOUNT_H
