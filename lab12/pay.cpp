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

void getInfo(float& salary, float& monthlySales, float& yearsEmployed);
float calcServiceBonus(float yearsEmployed);
float calcCommission(float monthlySales);
float calcPay(float salary, float bonus, float commission);
void displayPay(float salary, float bonus, float commission, float totalPay);

// === main =================================================================
int main() { 
    
    float salary = 0;
    float monthlySales = 0;
    float yearsEmployed = 0;
    float bonus = 0;
    float commission = 0;
    float totalPay = 0;

    // Ask for user input
    getInfo(salary, monthlySales, yearsEmployed);

    // Calculate pay
    bonus = calcServiceBonus(yearsEmployed);
    commission = calcCommission(monthlySales);
    totalPay = calcPay(salary, monthlySales, yearsEmployed);

    // Display pay to the user
    displayPay(salary, bonus, commission, totalPay);

   return 0;
}               // end of main
// ==========================================================================



// === getInfo ==============================================================
void getInfo(float& salary, float& monthlySales, float& yearsEmployed) {

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
float calcServiceBonus(float yearsEmployed) {

    float bonus;

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

    totalPay = salary + bonus + commission;

    return totalPay;
}                   // end of calcPay
// ==========================================================================



// === displayPay ===========================================================
void displayPay(float salary, float bonus, float commission, float totalPay) {

    cout << fixed << setprecision(2);
    cout << "Salary:\t" << salary << endl
         << "Service Bonus:\t" << left << setw(6) << bonus << endl
         << "Commission:\t" << left << setw(6) << commission << endl
         << "-----------------------------\n"
         << "Total Pay:\t" << left << setw(6) << totalPay << endl;;
    
}
// ==========================================================================



// ==========================================================================
/* OUTPUT:
*/
// ==========================================================================