// Attached: Lab 14
// ==========================================================================
// Program: Checking for Alphabet
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <cctype>
using namespace std;

// === main =================================================================
int main() { 
    
    char character = '\0';
    char again = '\0';

    do {
        // Prompt user input
        cout << "Please enter a keyboard character: ";
        cin >> character;

        // Determine if input is alphabetic
        if (isalpha(character)) {

            cout << "The character, " << character << " is an alphabetic character.\n\n";
        }
        else {

            cout << "The character, " << character << " is not an alphabetic character.\n\n";
        }

        // Ask user to do it again
        cout << "Do you want to do it again (Y/N)? ";
        cin >> again;

        cout << endl;

        system("clear");
    
    } while (toupper(again) == 'Y');

   return 0;
}               // end of main
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Please enter a keyboard character: y
The character, y is an alphabetic character.

Do you want to do it again (Y/N)? y

Please enter a keyboard character: 5
The character, 5 is not an alphabetic character.

Do you want to do it again (Y/N)? n
@aberhost0 ➜ /workspaces/CS1A/lab14 (main) $ */
// ==========================================================================