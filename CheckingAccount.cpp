//
// Created by we on 1/22/2021.
//

#include "CheckingAccount.h"
#include"BankAccount.h"
using namespace std;
#include <bits/stdc++.h>


void CheckingAccount::WithDraw(double valueWithDrawed) {
    if(Balance>0)
    {
        if(valueWithDrawed > Balance)
        {
            Balance=Balance-15;
            cout << "Withdrawal failed! Savings account "<<endl;
            if(Balance<0)
            {
                cout << "you owe the bank";
                MonthlyServiceCharges=-(Balance-MonthlyServiceCharges);
                cout << MonthlyServiceCharges<<endl;
            }
        }
        else
        {
            Balance=Balance-valueWithDrawed;
        }
    }
    useless++;
    BankAccount().WithDraw(valueWithDrawed);
}

void CheckingAccount::Deposit(double valueWithDeposited) {
    if(valueWithDeposited>0)
    {
        Balance=Balance+valueWithDeposited;
    } else
    {
        cout << "Deposit failed! Savings account "<<endl;
    }
    useless++;
    BankAccount::Deposit(valueWithDeposited);
}

void CheckingAccount::monthlyProc() {
    MonthlyServiceCharges=MonthlyServiceCharges + 5 + (0.1*useless);
    BankAccount::monthlyProc();
}

CheckingAccount::CheckingAccount() {
}
