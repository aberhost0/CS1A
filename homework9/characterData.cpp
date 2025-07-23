// Attached: HW_9b
// ==========================================================================
// Program: Checking Character Data
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <cctype>
using namespace std;

// Function Prototypes 

char getCharacter();
void displayResults(char character);

// === main =================================================================
int main() { 
    
    char character = '\0';
    char again = '\0';

    do { // Ask for user input
        character = getCharacter();

        // Display the type of character
        displayResults(character);

        cout << "Do it again (Y/N)?" ;
        cin >> again;

        cout << endl;

    } while (toupper(again) == 'Y');

    return 0;
}               // end of main
// ==========================================================================



// Function Definitions

// === getCharacter =========================================================
char getCharacter() {

    char character;

    cout << "Enter a character: ";
    cin >> character;

    cout << endl;

    return character;
}                   // end of getCharacter
// ==========================================================================



// === displayResults =======================================================
void displayResults(char character) {

    char lower = '\0';
    char upper = '\0';

    if (isalnum(character)) {

        cout << "Character is an alphanumeric character.\n\n";
    }

    if (isdigit(character)) {

        cout << "Character is a digit.\n\n";
    } 
    
    if (isalpha(character)) {

        cout << "Character is an alphabetic character.\n\n";
    }
    
    if (islower(character)) {

        upper = toupper(character);

        cout << "The character is lowercase.\n\n"
             << "It looks like this in uppercase: " << upper << "\n\n";
    }
    
    if (isupper(character)) {

        lower = tolower(character);

        cout << "The character is uppercase.\n\n"
             << "It looks like this is lowercase: " << lower << "\n\n";
    }
}                   // end of displayResults
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Enter a character: s

Character is an alphanumeric character.

Character is an alphabetic character.

The character is lowercase.

It looks like this in uppercase: S

Do it again (Y/N)?y
-----------------------------
Enter a character: B

Character is an alphanumeric character.

Character is an alphabetic character.

The character is uppercase.

It looks like this is lowercase: b

Do it again (Y/N)?y
-----------------------------
Enter a character: 3

Character is an alphanumeric character.

Character is a digit.

Do it again (Y/N)?n

@aberhost0 ➜ /workspaces/CS1A/homework9 (main) $ */
// ==========================================================================