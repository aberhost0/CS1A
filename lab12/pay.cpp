// Attached: Lab 12
// ==========================================================================
// Program: Calculate Pay
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
void getInfo(float& salary, float& monthlySales, int& yearsEmployed);
float calcServiceBonus(int yearsEmployed);
float calcCommission(float monthlySales);
float calcPay(float salary, float bonus, float commission);
void displayPay(float salary, float bonus, float commission, float totalPay);

// === main =================================================================
int main() { 
    
    float salary = 0;
    float monthlySales = 0;
    int yearsEmployed = 0;
    float bonus = 0;
    float commission = 0;
    float totalPay = 0;

    // Ask for user input
    getInfo(salary, monthlySales, yearsEmployed);

    // Calculate pay
    bonus = calcServiceBonus(yearsEmployed);
    commission = calcCommission(monthlySales);
    totalPay = calcPay(salary, bonus, commission);

    // Display pay to the user
    displayPay(salary, bonus, commission, totalPay);

   return 0;
}               // end of main
// ==========================================================================



// Function Definitions 

// === getInfo ==============================================================
void getInfo(float& salary, float& monthlySales, int& yearsEmployed) {

    // Prompt for user input 

    cout << "Enter your monthly salary: ";
    cin >> salary;

    cout << "Enter your sales for the month: ";
    cin >> monthlySales;

    cout << "Enter the number of years employed: ";
    cin >> yearsEmployed;

    cout << endl << endl;
}                   // end of getInfo
// ==========================================================================



// === calcServiceBonus =====================================================
float calcServiceBonus(int yearsEmployed) {

    float bonus = 0;

    // Determine bonus based on years employeed entered

    if (yearsEmployed < 5) {

        bonus = 0;
    }
    else if (yearsEmployed >= 5) {

        bonus = yearsEmployed * 25;
    }

    return bonus;
}                   // end of calcServiceBonus
// ==========================================================================



// === calcCommission ========================================================
float calcCommission(float monthlySales) {

    float commission;

    // Determine commision based on monthly sales entered 

    if (monthlySales >= 5000) {

        commission = monthlySales * 0.06;
    }
    else {

        commission = 0;
    }

    return commission;
}                   // end of calcCommission 
// ==========================================================================



// === calcPay ==============================================================
float calcPay(float salary, float bonus, float commission) {

    float totalPay;

    // Calculate the total pay

    totalPay = (salary + bonus + commission);
   
    return totalPay;
}                   // end of calcPay
// ==========================================================================



// === displayPay ===========================================================
void displayPay(float salary, float bonus, float commission, float totalPay) {

    // Display the total pay to the user and the individual components 
    
    cout << fixed << setprecision(2);
    cout << "Salary:\t\t" << setw(10) << salary << endl
         << "Service Bonus:\t" << setw(10) << bonus << endl
         << "Commission:\t" << setw(10) << commission << endl
         << "-----------------------------\n"
         << "Total Pay:\t" << setw(10) << totalPay << endl;   
}                   // end of displayPay
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Enter your monthly salary: 2000
Enter your sales for the month: 8500
Enter the number of years employed: 6


Salary:            2000.00
Service Bonus:      150.00
Commission:         510.00
-----------------------------
Total Pay:         2660.00
@aberhost0 ➜ /workspaces/CS1A/lab12 (main) $ */
// ==========================================================================