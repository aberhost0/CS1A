// Attached: Lab_7
// ==========================================================================
// Program: Password Digits
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <string>
using namespace std;

// === main =================================================================
int main() { 
    char password;
    int num = 0;
    int digits = 0;

    // Asks for user password
    cout << "Enter your password: ";
    cin.get(password);
    
    // Iterates for the entire length of the password
    while (password != '\n') {

        cin.get(password);

        // Reads every character indivisually for digit validation 
        if (password >= 0 && password <= 9) {
            
            num = password;
            digits = digits + 1;
            
            cout << "Here are the digits in the password:\n" << num << "\t";
            cout << "\n\nThere are " << digits << " in the password.\n\n";
        }
        else {
            cout << "Maybe add a number to your password...\n\n";
        }
    } 

   return 0;
}               // end of main
// ==========================================================================



// ==========================================================================
/* OUTPUT:
*/
// ==========================================================================