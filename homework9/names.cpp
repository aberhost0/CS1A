// Attached: HW_9c
// ==========================================================================
// Program: cString vs string
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// === main =================================================================
int main() { 

    const int SIZE = 20;

    char firstName[SIZE];
    char lastName[SIZE];
    char fullName[SIZE * 2];
    string friendsName;

    // Display one name using cString

    cout << "Enter first name: ";
    cin.get(firstName, SIZE);

    cin.ignore();

    cout << "Enter last name: ";
    cin.get(lastName, SIZE);

    cin.ignore();

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    cout << "\nHow is your love life " << fullName << "?\n\n";

    cout << "By the way, your full name has " << strlen(lastName) << " characters.\n\n\n";

    // Display one name using string class

    cout << "Enter your friend's full name: ";
    getline(cin, friendsName);

    cout << "\nHow is " << friendsName << "'s love life " << firstName << "?\n\n";

    cout << "By the way, your friend's full name has " << friendsName.length() << " characters.\n\n";

   return 0;
}               // end of main
// ==========================================================================



// === getSide ==============================================================

// ==========================================================================



// ==========================================================================
/* OUTPUT:
Enter first name: Alyssa
Enter last name: Berhost

How is your love life Alyssa Berhost?

By the way, your full name has 7 characters.


Enter your friend's full name: Barack Obama 

How is Barack Obama's love life Alyssa?

By the way, your friend's full name has 12 characters.

@aberhost0 ➜ /workspaces/CS1A/homework9 (main) $*/
// ==========================================================================