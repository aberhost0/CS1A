// Attached: Lab 10
// ==========================================================================
// Program: Banking
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
using namespace std;

float getBalance(float balance);
float getDeposit(float deposit);
float calcNewBalance(float balance, float deposit);
void displayBalance(float newBalance);

// === main =================================================================
int main() { 
    
    float balance = 0;
    float deposit = 0;
    float newBalance = 0;

    // Get user input
    balance = getBalance(balance);
    deposit = getDeposit(deposit);

    // Pass user input by value to calculate new balance
    newBalance = calcNewBalance(balance, deposit);

    // Display the user's new balance
    displayBalance(newBalance);

   return 0;
}               // end of main
// ==========================================================================



// === getBalance ===========================================================
float getBalance(float balance) {

    cout << "Enter your bank balance: ";
    cin >> balance;
    cout << endl;

    return balance;
}                   // end of getBalance
// ==========================================================================



// === getDeposit ===========================================================
float getDeposit(float deposit) {

    cout << "Enter the deposit amount: ";
    cin >> deposit;
    cout << endl;

    return deposit;
}                   // end of getDeposit
// ==========================================================================



// === calcNewBalance =======================================================
float calcNewBalance(float balance, float deposit) {

    float newBalance;

    newBalance = balance + deposit;

    return newBalance;
}                       // end of calcNewBalance
// ==========================================================================



// === displayBalance =======================================================
void displayBalance(float newBalance) {

    cout << "Your new balance is $" << newBalance << ".\n\n";

}   // end of displayBalance
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Enter your bank balance: 1000

Enter the deposit amount: 500

Your new balance is $1500.

@aberhost0 ➜ /workspaces/CS1A/lab10 (main) $ */
// ==========================================================================