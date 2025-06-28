// Attached: HW_5
// ======================================================================
// Program: Positive_or_Negative
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() { 
    int number;

    cout << "Enter a numerical value: ";
    cin >> number;

    if (number > 0) {
        cout << "You entered a positive number.\n\n";
    }
    else if (number < 0) {
        cout << "You entered a negative number.\n\n";
    }
    else {
        cout << "The number you entered is a zero.\n\n";
    }

    return 0;
}
// ======================================================================
/* OUTPUT:
Enter a numerical value: 7
You entered a positive number.

@aberhost0 ➜ /workspaces/CS1A/homework5 (main) $ ./a.out
Enter a numerical value: -3
You entered a negative number.

@aberhost0 ➜ /workspaces/CS1A/homework5 (main) $ ./a.out
Enter a numerical value: 0
The number you entered is a zero.

@aberhost0 ➜ /workspaces/CS1A/homework5 (main) $ */
// ======================================================================