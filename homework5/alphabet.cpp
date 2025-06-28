// Attached: HW_5a
// ======================================================================
// Program: Alphabet
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() { 
   char key;

   cout << "Enter a keyboard character and press Enter: \n";
   cin >> key;

   if(toupper(key) >= 65 && toupper(key) <= 90) {
      cout << "The character is an alphabetic character.\n";
   }
   else {
      cout << "The character is not an alphabetic character. \n";
   }

return 0;
}
// ======================================================================
/* OUTPUT:
Enter a keyboard character and press Enter: 
z
The character is an alphabetic character.
@aberhost0 ➜ /workspaces/CS1A/homework5 (main) $ ./a.out
Enter a keyboard character and press Enter: 
7
The character is not an alphabetic character. 
@aberhost0 ➜ /workspaces/CS1A/homework5 (main) $ */
// ======================================================================