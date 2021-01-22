//
// Created by we on 1/22/2021.
//

#ifndef BANK_MANGEMENT_ACCOUNTOWNER_H
#define BANK_MANGEMENT_ACCOUNTOWNER_H


#include <bits/stdc++.h>
using namespace std;

class AccountOwner {
private:
    string FirstName,LastName,FullName,PhoneNumber,NationalID;
    vector<string>Full_Name;
    vector<string>Phone_Number;
    vector<string>National_ID;
public:
    AccountOwner(); //empty constractor

    AccountOwner(string fname,string lname,string phone,string id);//Parameter contractor


};
#endif //BANK_MANGEMENT_ACCOUNTOWNER_H
