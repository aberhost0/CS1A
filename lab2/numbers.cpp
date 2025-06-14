// Attached: Lab_2
// ======================================================================
// Program: Numbers
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() { 
   double num1;
   double num2;
   double num3;
   double result;

   cout << fixed << setprecision(2);

   cout << "Enter the first number: ";
   cin >> num1;
   cout << "Enter the second number: ";
   cin >> num2;
   cout << "Enter the third number: ";
   cin >> num3;

   result = sqrt(num1);
   cout << "The square root of the first number is " << result << endl;

   result = pow(num1, 3);
   cout << num1 << "raised to the power of 3 is " << result << endl;

   result = abs(num1);
   cout << "The absoulute value of " << num1 << " is " << result << endl;

   result = (num1 + num2 + num3) / 3
   cout << "The average equals " << result << endl;


return 0;
}
// ======================================================================
/* OUTPUT:
   */
// ======================================================================