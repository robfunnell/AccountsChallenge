#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    //Accounts
    vector<Account> accounts;
    accounts.push_back(Account{"Kenny", 5000});
    accounts.push_back(Account{"Larry", 10000});

    vector<Savings_Account> savings_accounts;
    savings_accounts.push_back(Savings_Account{"Kenny", 5000, 0.8 });
    savings_accounts.push_back(Savings_Account{"Larry", 10000, 0.5 });

    vector<Checking_Account> checking_accounts;
    checking_accounts.push_back(Checking_Account{"Kenny", 5000 });
    checking_accounts.push_back(Checking_Account{"Larry", 10000 });


    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(savings_accounts);
    deposit(savings_accounts, 1000);
    withdraw(savings_accounts, 2000);

    display(checking_accounts);
    deposit(checking_accounts, 1000);
    withdraw(checking_accounts, 2000);
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
