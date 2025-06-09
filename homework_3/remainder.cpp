// Attached: HW_3b
// ======================================================================
// Program: Quotients and Remainders
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() { 
   int firstNum;
   int secondNum;

   cout << "Enter the first number: ";
   cin >> firstNum;
   cout << "Enter the second number: ";
   cin >> secondNum;

   cout << firstNum << " divided by " << secondNum << " equals " << firstNum / secondNum
      << " with a remainder of " << firstNum % secondNum << "." << endl;

return 0;
}
// ======================================================================
/* OUTPUT:
Enter the first number: 126
Enter the second number: 31
126 divided by 31 equals 4 with a remainder of 2.
@aberhost0 ➜ /workspaces/CS1A/homework_3 (main) $ */
// ======================================================================