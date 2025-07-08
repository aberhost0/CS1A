// Attached: HW_7a-2
// ==========================================================================
// Program: Menu
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float getNumber();
void showMenu();
char getChoice();
void showResult(float num, char choice);

// === main =================================================================
int main() { 
    
   float num;
   char choice;

   // Ask for user input 
   num = getNumber();

   // Display menu of options and get user choice
   showMenu();
   choice = getChoice();

   // Display the result of the calculation 
   showResult(num, choice);

   return 0;
}               // end of main
// ==========================================================================



// === getNumber ============================================================
float getNumber() {

   float num;

   cout << "Enter a float value: ";
   cin >> num;

   return num;
}              // end of getNumber
// ==========================================================================



// === showMenu =============================================================
void showMenu() {

   cout << "\nA.)\tCalculate the square."
        << "\nB.)\tCalculate the square root.";
}  // end of showMenu
// ==========================================================================



// === getChoice =============================================================
char getChoice() {

   char choice;

   cout << "\n\nEnter choice: ";
   cin >> choice;

   return choice;
}                 // end of getChoice
// ==========================================================================



// ==========================================================================
void showResult(float num, char choice) {

   cout << fixed << setprecision(2) << endl;

   if (toupper(choice) == 'A') {

      cout << num << " squared equals " << num * num << "\n\n";
   }
   else if (toupper(choice) == 'B') {

      cout << "The square root of " << num << " equals " << sqrt(num) << "\n\n";
   }
   else {
      
      cout << "Invalid entry... Must be A or B. Goodye.\n";
   }
}
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Enter a float value: 5.0

A.)     Calculate the square.
B.)     Calculate the square root.

Enter choice: a

5.00 squared equals 25.00

@aberhost0 ➜ /workspaces/CS1A/homework7b (main) $ ./a.out
Enter a float value: 5.0

A.)     Calculate the square.
B.)     Calculate the square root.

Enter choice: b

The square root of 5.00 equals 2.24

@aberhost0 ➜ /workspaces/CS1A/homework7b (main) $ ./a.out
Enter a float value: 5.0

A.)     Calculate the square.
B.)     Calculate the square root.

Enter choice: c

Invalid entry... Must be A or B. Goodye.
@aberhost0 ➜ /workspaces/CS1A/homework7b (main) $ */
// ==========================================================================