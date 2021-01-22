//
// Created by we on 1/22/2021.
//

#include "AccountOwner.h"
#include <bits/stdc++.h>
using namespace std;
//
// Created by Yosef Sayed on 2020-06-06.
//

#include "AccountOwner.h"
using namespace std;
AccountOwner::AccountOwner()
{
    FullName=' ';
    PhoneNumber = ' ';
    NationalID = ' ';
}//empty constructor
AccountOwner::AccountOwner(string fname, string lname, string phone, string id)
{
    FullName = fname + lname;
    PhoneNumber=phone;
    NationalID=id;
}//parameter constructor
