// Attached: HW_8b
// ==========================================================================
// Program: Reverse Order
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
using namespace std;

// Function Prototypes

void getAges(int ages[], const int SIZE);
char getChoice();
void displayInOrder(int ages[], const int SIZE);
void displayInReverse(int ages[], const int SIZE);

// === main =================================================================
int main() { 
    
    const int SIZE = 5;
    int ages[SIZE];
    char choice;
    char again;

   do {

        // Ask for user inout
        getAges(ages, SIZE);
        choice = getChoice();

        // Display array depending on choice 
        
        if (choice == '1') {

            displayInOrder(ages, SIZE);
        }
        else if (choice == '2') {

            displayInReverse(ages, SIZE);
        }

        cout << endl << endl;

        // Ask user to run again
        cout << "Run program again (y/n)? ";

        cin >> again;

    } while (tolower(again) == 'y');

   return 0;
}               // end of main
// ==========================================================================

// Function Definitions 

// === getAges ==============================================================
void getAges(int ages[], const int SIZE) {

    // Ages are entered to an array 

    cout << "Enter 5 ages: \n\n";
    
    for (int i = 0; i < SIZE; i++) {

        cin >> ages[i];
    }
    cout << endl << endl;
}                   // end of getAges
// ==========================================================================



// === getChoice =============================================================
char getChoice() {

    char choice {}; 

    // Get user input until it is valid 

    do {
        cout << "How do you want to see the ages displayed?\n" 
         << "Enter 1 for In Order, or 2 for In Reverse: ";
        cin >> choice;
        
    } while (choice != '1' && choice != '2');

    return choice;
}                   // end of getChoice
// ==========================================================================



// === displayInOrder ========================================================
void displayInOrder(int ages[], const int SIZE) {

    // Display the ages as entered 

    cout << "Here are the ages in order: \n\n";

    for (int i = 0; i < SIZE; i++) {

        cout << ages[i] << "\t";
    }
    cout << endl;
}                   // end of displayInOrder
// ==========================================================================



// === displayInReverse ======================================================
void displayInReverse(int ages[], const int SIZE) {

    int reverse[SIZE] = {};

    // Display the ages in reverse 

    cout << "Here are the ages in reverse order: \n\n";

    for (int i = 0; i < SIZE; i++) {
        reverse[i] = ages[SIZE - 1 - i];
    }

    for (int i = 0; i < SIZE; i++) {

        cout << reverse[i] << "\t";
    }
}                   // end of displayInReverse
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Enter 5 ages: 

21
22
19
27
29


How do you want to see the ages displayed?
Enter 1 for In Order, or 2 for In Reverse: 1
Here are the ages in order: 

21      22      19      27      29


Run program again (y/n)? y
Enter 5 ages: 

21
22
19
27
29


How do you want to see the ages displayed?
Enter 1 for In Order, or 2 for In Reverse: 2
Here are the ages in reverse order: 

29      27      19      22      21

Run program again (y/n)? n
@aberhost0 ➜ /workspaces/CS1A/homework8 (main) $ */
// ==========================================================================