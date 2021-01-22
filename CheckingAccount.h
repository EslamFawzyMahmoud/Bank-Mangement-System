//
// Created by we on 1/22/2021.
//

#ifndef BANK_MANGEMENT_CHECKINGACCOUNT_H
#define BANK_MANGEMENT_CHECKINGACCOUNT_H


#include "BankAccount.h"


class CheckingAccount : public BankAccount{
    using BankAccount::BankAccount;
private:
    int useless=0;
public:
    CheckingAccount();
    virtual void WithDraw(double valueWithDrawed);
    void Deposit(double valueWithDeposited);
    void monthlyProc();
};


#endif //BANK_MANGEMENT_CHECKINGACCOUNT_H
