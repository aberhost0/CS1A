// Attached: HW_3a
// ======================================================================
// Program: Tax Rate
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() { 
    const float TAX_RATE = 0.07;
    float januarySales;
    float februarySales;
    float marchSales;
    float totalSales;
    float salesTax;

    cout << "Enter January Sales: ";
    cin >> januarySales;
    cout << "Enter February Sales: ";
    cin >> februarySales;
    cout << "Enter March Sales: ";
    cin >> marchSales;

    totalSales = januarySales + februarySales + marchSales;
    salesTax = totalSales * TAX_RATE;

    cout << "Total sales for the first three months is $" << totalSales << endl;
    cout << "The total sales tax is $" << salesTax << endl;


return 0;
}
// ======================================================================
/* OUTPUT:
Enter January Sales: 1101.55
Enter February Sales: 2321.22
Enter March Sales: 3313.12
Total sales for the first three months is $6735.89
The total sales tax is $471.512
@aberhost0 ➜ /workspaces/CS1A/homework_3 (main) $ */
// ======================================================================