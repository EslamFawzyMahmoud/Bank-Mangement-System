#include <bits/stdc++.h>
#include "AccountOwner.cpp"
#include "BankAccount.cpp"
#include "CheckingAccount.cpp"
#include "SavingsAccount.cpp"

using namespace std;

char option;
double balance;
double deposit;
double withdraw;
double interest_rate;
int choice;
int choice2;
//int index;
bool check=true;
string FirstName;
string LastName;
string PhoneNumber;
string ID_Number;
int main() {

    cout<<"Enter Your Account Type (1- Saving Account || 2- Checking Account): "<<endl;
    cin>>choice2;
    cin.ignore();
    cout<<"Enter Your First Name: "<<endl;
    getline(cin,FirstName);
    cout<<"Enter Your Last Name: "<<endl;
    getline(cin,LastName);
    cout<<"Enter Your Phone: "<<endl;
    getline(cin,PhoneNumber);
    cout<<"Enter Your ID Number: "<<endl;
    getline(cin,ID_Number);
    Valid1:
    try {
        cout<<"Enter Initial balance: "<<endl;
        cin>>balance;
        if(balance<=0)
            throw "Wrong balance";

    }catch(...) {
        cout<<"Please, Enter Positive Value for Balance."<<endl;
        goto Valid1;
    }

    Valid2:
    try {
        cout<<"Enter interest rate: "<<endl;
        cin>>interest_rate;
        if(interest_rate<0||interest_rate>1)
            throw "Wrong Interest Rate";

    }catch(...) {
        cout<<"Please, Enter Interest Rate Between 0 and 1."<<endl;
        goto Valid2;
    }
    AccountOwner a (FirstName,LastName,PhoneNumber,ID_Number);\
        SavingsAccount b (a,balance,interest_rate);
    CheckingAccount c (a,balance,interest_rate);

    while (check) {
        if (choice2 ==1 )
        {
            b.CheckStatues();
            cout << "===============================\n"
                    "1-View Balance\n"
                    "2-Deposit\n"
                    "3-Withdraw\n"
                    "4-Calculate interest and charges\n"
                    "5-Apply monthly interest and charges\n"
                    "6-Display Monthly Stats\n"
                    "0-Exit\n"
                    "===============================\n"
                    "Enter your choice:" << endl;
            cin >> choice;
            cin.ignore();
            switch (choice) {
                case 1: {
                    cout<<"Your Balance = "<<b.getBalance()<<endl;
                    break;
                }
                case 2: {
                    Valid3:
                    try {
                        cout<<"Enter deposit amount: "<<endl;
                        cin>>deposit;
                        if(deposit<0)
                            throw "Wrong Deposit";

                    }catch(...) {
                        cout<<"Please, Enter Positive Value to deposit. "<<endl;
                        goto Valid3;
                    }
                    b.Deposit(deposit);
                    cout<<"Deposit added!"<<endl;
                    break;
                }
                case 3: {
                    Valid4:
                    try {
                        cout<<"Enter withdraw amount: "<<endl;
                        cin>>withdraw;
                        if(withdraw<0)
                            throw "Wrong WithDraw";

                    }catch(...) {
                        cout<<"Please, Enter Positive Value to WithDraw. "<<endl;
                        goto Valid4;
                    }
                    b.WithDraw(withdraw);
                    cout<<"Withdraw Done!"<<endl;
                    break;
                }

                case 4: {
                    b.calcInt();
                    cout<<"Done!"<<endl;
                    break;
                }
                case 5: {
                    b.monthlyProc();
                    cout<<"Done!"<<endl;
                    break;
                }
                case 6: {
                    cout<<"==============================="<<endl<<
                        "Beginning Balance = "<<balance<<endl<<
                        "Total amount of deposits = "<<b.getDeposits()<<endl<<
                        "Total amount of withdraws = "<<b.getWithdraws()<<endl<<
                        "Monthly Service Charges = "<<b.getCharges()<<endl<<
                        "Ending Balance = "<<b.getBalance()<<endl<<
                        "==============================="<<endl;
                    break;
                }
                case 0: {
                    check = false;
                    return 0;
                }
            }
        }
        else if (choice2 == 2 ) {

            cout << "===============================\n"
                    "1-View Balance\n"
                    "2-Deposit\n"
                    "3-Withdraw\n"
                    "4-Calculate interest and charges\n"
                    "5-Apply monthly interest and charges\n"
                    "6-Display Monthly Stats\n"
                    "0-Exit\n"
                    "===============================\n"
                    "Enter your choice:" << endl;
            cin >> choice;
            cin.ignore();
            switch (choice) {
                case 1: {
                    cout<<"Your Balance = "<<c.getBalance()<<endl;
                    break;
                }
                case 2: {
                    Valid5:
                    try {
                        cout<<"Enter deposit amount: "<<endl;
                        cin>>deposit;
                        if(deposit<0)
                            throw "Wrong Deposit";

                    }catch(...) {
                        cout<<"Please, Enter Positive Value to deposit. "<<endl;
                        goto Valid5;
                    }
                    c.Deposit(deposit);
                    cout<<"Deposit added!"<<endl;
                    break;
                }
                case 3: {
                    Valid6:
                    try {
                        cout<<"Enter withdraw amount: "<<endl;
                        cin>>withdraw;
                        if(withdraw<0)
                            throw "Wrong WithDraw";

                    }catch(...) {
                        cout<<"Please, Enter Positive Value to WithDraw. "<<endl;
                        goto Valid6;
                    }
                    c.WithDraw(withdraw);
                    cout<<"Withdraw Done!"<<endl;
                    break;
                }
                case 4: {
                    c.calcInt();
                    cout<<"Done!"<<endl;
                    break;
                }
                case 5: {
                    c.monthlyProc();
                    cout<<"Done!"<<endl;
                    break;
                }
                case 6: {
                    cout<<"==============================="<<endl<<
                        "Beginning Balance = "<<balance<<endl<<
                        "Total amount of deposits = "<<c.getDeposits()<<endl<<
                        "Total amount of withdraws = "<<c.getWithdraws()<<endl<<
                        "Monthly Service Charges = "<<c.getCharges()<<endl<<
                        "Ending Balance = "<<c.getBalance()<<endl<<
                        "==============================="<<endl;
                    break;
                }
            }
        }

    }
}
