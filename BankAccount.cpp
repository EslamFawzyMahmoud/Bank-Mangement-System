//
// Created by we on 1/22/2021.
//

#include "AccountOwner.h"
#include "BankAccount.h"
using namespace std;


BankAccount::BankAccount() {

}//empty constructor
BankAccount::BankAccount(AccountOwner account, double balance, double annualinteresterate) {
    accountowner=account;
    Balance=balance;
    AnnualInterestRate=annualinteresterate;
}//parameter constructor

void BankAccount::Deposit(double Value) {
    Balance+=Value;
    NumberOfDeposits++;
}

void BankAccount::WithDraw(double Value) {
    Balance -= Value;
    NumberOfWithdraw ++;
}

void BankAccount::calcInt() {
    Monthly_Interest_Rate = (AnnualInterestRate/12);
    Monthly_Interest = Balance*Monthly_Interest_Rate;
    Balance +=Monthly_Interest;
}

void BankAccount::monthlyProc() {
    Balance-=MonthlyServiceCharges;
    calcInt();
    NumberOfDeposits=0;
    NumberOfWithdraw=0;
    MonthlyServiceCharges=0;
}

double BankAccount::getBalance() {
    return Balance;
}

double BankAccount::getCharges() {
    return MonthlyServiceCharges;
}

double BankAccount::getDeposits() {
    return NumberOfDeposits;
}

double BankAccount::getWithdraws() {
    return NumberOfWithdraw;
}
