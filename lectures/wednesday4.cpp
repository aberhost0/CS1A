#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1 = 2;
    int num2 = 2;
    int num3 = 2;

    num2 = num1++;
    num3 = --num1;
    num1 = num2++;

    cout << num1 << endl		
        << num2 << endl		
        << num3 << endl;	

    return 0;
}

// -------------------------------------------------------------------------

/* Switch selection control 
int main() {
    int choice = 0;
    
    cout << "A. Rock and Roll\n"
        << "B. Blues\n"
        << "C. Jazz\n"
        << "Which one of these do you like (A, B or C)?\n";
    cin >> choice;

    // toupper(choice);

    switch (toupper(choice))
    {
    case 'A': cout << "Rock is cool.\n\n";
        break;
    case 'B': cout << "Blues is fine.\n\n";
        break;
    case 'C': cout << "No.\n\n";
        break;
    default: cout << "Invalid entry. Must be A, B or C.\n\n";
    }
    return 0;
} */

// -------------------------------------------------------------------------
/* If switch selection - menu
int main() {
    int choice = 0;

    cout << "A. Rock and Roll\n"
        << "B. Blues\n"
        << "C. Jazz\n"
        << "D. None of the above.\n\n"
        << "Which one of these do you like (A, B, C or D)?\n";
    cin >> choice;

    choice = toupper(choice);

    // Logical expression must evaluate to true or false
    if (choice == 'A') {
        cout << "Rock is cool.\n\n";
    }
    else if (choice == 'B') {
        cout << "Blues is orgins of modern music.\n\n";
    }
    else if (choice == 'C') {
        cout << "Jazz gags me.\n\n";
    }
    else if (choice == 'D') {
        cout << "I don't know what to say\n\n";
    }
    else {
        cout << "Invalid entry...Must be A, B, C or D\n\n";
    }

    return 0;
} */