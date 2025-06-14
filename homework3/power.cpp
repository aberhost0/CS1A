// Attached: HW_3c
// ======================================================================
// Program: Exponents 
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() { 
   double base;
   int exponent;
   double power = 0;
   double square = 0;

   cout << "Enter the base: ";
   cin >> base;
   cout << "Enter the exponent: ";
   cin >> exponent;

   power = pow(base, exponent);
   square = sqrt(base);

   cout << base << " to the power of " << exponent << " equals " << power << "." << endl;
   cout << fixed << setprecision(2); 
   cout << "The square root of " << base << " equals " << square << "." << endl;


return 0;
}
// ======================================================================
/* OUTPUT:
Enter the base: 3
Enter the exponent: 2
3 to the power of 2 equals 9.
The square root of 3.00 equals 1.73.
@aberhost0 ➜ /workspaces/CS1A/homework_3 (main) $ */
// ======================================================================