// Attached: Lab_1a
// ======================================================================
// Program: Banking
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() { 

    double checkingAccount = 0;
    double savingsAccount = 0;
    double deposit = 0; 
    double checkingBalance = 0;
    double savingsBalance = 0;
    double checkAmount = 0;
    double totalBalance = 0;

    cout << "Enter your present checking balance: ";
    cin >> checkingAccount;
    cout << "Enter your present savings account balance: ";
    cin >> savingsAccount; 
    cout << "Enter the amount to be deposited into your savings account: ";
    cin >> deposit;
    cout << "Enter the amount of the check you wish to write: ";
    cin >> checkAmount;

    savingsBalance = savingsAccount + deposit;
    checkingBalance = checkingAccount - checkAmount;
    totalBalance = savingsBalance + checkingBalance;

    cout << "Your savings account balance is: $" << savingsBalance << "\n\n";
    cout << "Your checking account balance is: $" << checkingBalance << "\n\n";
    cout << "The total remaining balance is: $" << totalBalance << "\n\n";
    cout << "Well, you're not exactly rich, but not bad." << endl;


return 0;
}
// ======================================================================
/* OUTPUT:
Enter your present checking balance: 1000
Enter your present savings account balance: 1500
Enter the amount to be deposited into your savings account: 500
Enter the amount of the check you wish to write: 400
Your savings account balance is: $2000

Your checking account balance is: $600

The total remaining balance is: $2600

Well, you're not exactly rich, but not bad.
@aberhost0 ➜ /workspaces/CS1A/Lab_1a (main) $   */
// ======================================================================