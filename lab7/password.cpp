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
    int count = 0;

    cout << "Enter your password: ";
    cin.get(password);

    cout << "\nHere are the digits in the password: \n";

    // Iterates for the entire length of the password until the enter key
    while (password != '\n') {

        cin.get(password);

        // Check for a digit
        switch (password)
        {
        case '0': 
            cout << "0\t";
            count++;
            break;
        case '1': 
            cout << "1\t";
            count++;
            break;
        case '2': 
            cout << "2\t";
            count++;
            break;
        case '3':  
            cout << "3\t";
            count++;
            break;
        case '4': 
            cout << "4\t";
            count++;
            break; 
        case '5':
            cout << "5\t";
            count++;
            break;
        case '6': 
            cout << "6\t";
            count++;
            break;
        case '7': 
            cout << "7\t";
            count++;
            break;
        case '8': 
            cout << "8\t";
            count++;
            break;
        case '9': 
            cout << "9\t";
            count++;
            break;
        }

    }

    cout << endl << endl;
    cout << "There are " << count << " digits in your password.\n";

    return 0;
}               // end of main
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Enter your password: abc123xyz

Here are the digits in the password: 
1       2       3

There are 3 digits in your password.
@aberhost0 ➜ /workspaces/CS1A/lab7 (main) $ */
// ==========================================================================