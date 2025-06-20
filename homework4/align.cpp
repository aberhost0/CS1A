// Attached: HW_4a
// ======================================================================
// Program: Aligning Integers
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
   int num1 = 0;
   int num2 = 0;
   int num3 = 0;
   int num4 = 0;
   int num5 = 0;
   int sum = 0;
   int count = 5;
   float avg = 0;

   cout << "Enter 5 integers: \n";
   cin >> num1 >> num2 >> num3 >> num4 >> num5;
;
   cout << "The five numbers entered are: \n" 
      << setw(10) << num1 << "\n" 
      << setw(10) << num2 << "\n" 
      << setw(10) << num3 << "\n" 
      << setw(10) << num4 << "\n" 
      << setw(10) << num5 << "\n"; 

   sum = num1 + num2 + num3 + num4 + num5;
   cout << "The sum of the five numbers is " << sum << "." << endl;

   avg = float(sum) / (float)count; 
   cout << fixed << setprecision(2);
   cout << "The average of the five numbers is " << avg << "." << endl;

    return 0;
}
// ======================================================================
/* OUTPUT:
Enter 5 integers: 
2
5
66
32
433
The five numbers entered are: 
         2
         5
        66
        32
       433
The sum of the five numbers is 538.
The average of the five numbers is 107.60.
@aberhost0 ➜ /workspaces/CS1A/homework4 (main) $ */
// ======================================================================