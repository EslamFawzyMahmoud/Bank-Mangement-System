//
// Created by we on 1/22/2021.
//
#include "SavingsAccount.h"
#include "BankAccount.h"

using namespace std;
#include <bits/stdc++.h>
SavingsAccount::SavingsAccount()
{
///check if balance is greater than 25 to marked status

    if(Balance >= 25){
        status = active;
    }
    else{
        status = inactive;
    }
}
void SavingsAccount::CheckStatues() {
    if(Balance<25)
    {
        status= inactive;
    } else
    {
        status=active;
    }
}

bool SavingsAccount::getStatus() {
    return  status;
}

void SavingsAccount:: WithDraw(double Value)
{
    if(status == active)
    {
        BankAccount::WithDraw(Value);
        if(Balance < 25)
            status = inactive;
    }
    else{
        /// invalid message if the previous conditions not be
        cout << "Withdrawal failed! Savings account ";
        cout << "is inactive (Current balance: $";
        cout << Balance << ")" << endl;
    }
}

void SavingsAccount::Deposit(double value)
{
    if(status == inactive)
    {
        ///check if deposit will bring balance over 25

        if(value + Balance >= 25)
        {
            BankAccount::Deposit(value);
        }
        else{
            ///if not be true show invalid message

            cout << "Deposit failed! Savings account will";
            cout << " be inactive after deposit!\n($";
            cout << Balance << " + $" << value;
            cout << " = $" << Balance + value << ")\n";
            return;
        }
    }
    else{
        ///means account is still active
        BankAccount::Deposit(value);
    }
}

void SavingsAccount::monthlyProc() {
    bool Flag = true;
    int extra_withdraw;
    if(NumberOfWithdraw>4)
    {
        extra_withdraw=NumberOfWithdraw;
        extra_withdraw=extra_withdraw-4;
        MonthlyServiceCharges=extra_withdraw;
        Balance=Balance-MonthlyServiceCharges;
        calcInt();
        NumberOfDeposits=0;
        NumberOfWithdraw=0;
        MonthlyServiceCharges=0;
        CheckStatues();
    }
    else {
        BankAccount::monthlyProc();
        CheckStatues();
    }
}

double SavingsAccount::getBalance() {
    return Balance;
}

