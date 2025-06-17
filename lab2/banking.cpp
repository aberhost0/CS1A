// Attached: Lab_2
// ======================================================================
// Program: Banking
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() { 
    const double RATE = 0.05; 
    double balance = 1000.00;
    double deposit = 0;
    double newBal = 0;
    double interest;

    cout << fixed << setprecision(2);

    cout << "Your present balance is " << balance << "." << endl;
    cout << "Enter the deposit amount: ";
    cin >> deposit;

    newBal = balance + deposit;
    interest = (newBal * RATE) / 12.0; 

    cout << "\n\n ---------- Account Summary ----------" << endl << endl;
    cout << left << "Previous Balance: $" << right << setw(10) << balance << endl 
         << left << "Deposit Amount:   $" << right << setw(10) << deposit << endl 
         << left << "New Balance:      $" << right << setw(10) << newBal << endl
         << left << "Monthly Interest: $" << right << setw(10) << interest << endl;


    return 0;
}
// ======================================================================
/* OUTPUT:
Your present balance is 1000.00.
Enter the deposit amount: 500


 ---------- Account Summary ----------

Previous Balance: $   1000.00
Deposit Amount:   $    500.00
New Balance:      $   1500.00
Monthly Interest: $      6.25
@aberhost0 ➜ /workspaces/CS1A/lab2 (main) $ */
// ======================================================================