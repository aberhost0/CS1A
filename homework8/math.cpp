// Attached: HW_8a
// ==========================================================================
// Program: Do the Math
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function Prototypes 
void getValues(double numbers[], const int SIZE);
void showMenu();
char getChoice();
void doTheMath(double numbers[], const int SIZE, char choice);

// === main =================================================================
int main() { 
    
    const int SIZE = 5;
    double numbers[SIZE];
    char choice;

    // User input for values 
    getValues(numbers, SIZE);

    cout << endl << endl;

    // Display choices to the user and get input
    showMenu();
    choice = getChoice();

    cout << endl << endl;

    // Display completed math operation
    doTheMath(numbers, SIZE, choice);

   return 0;
}               // end of main
// ==========================================================================



// Function Definitions 

// === getValues =============================================================
void getValues(double numbers[], const int SIZE) {

    cout << "Enter 5 numbers: \n";

    for (int i = 0; i < SIZE; i++) {

        cin >> numbers[i];
    }
}                   // end of getValues
// ==========================================================================



// === showMenu =============================================================
void showMenu() {

    cout << "A. Display the Square Root of each number.\n"
         << "B. Display the Sum of all numbers.\n"
         << "C. Dsiplay the Average of all numbers.\n\n";
}                   // end of displayMenu
// ==========================================================================



// === getChoice =============================================================
char getChoice() {

    char choice;

    cout << "Enter choice: ";
    cin >> choice;

    choice = toupper(choice); 

    return choice;
}                   // end of getChoice
// ==========================================================================



// === doTheMath =============================================================
void doTheMath(double numbers[], const int SIZE, char choice) {

    double sum = 0;
    double average = 0; 

    switch(choice) 
    {
    case 'A': 
        
        // Display the square roots of each index 

        cout << "The square roots are:\n";

        for (int i = 0; i < SIZE; i++) {

                // presicion 
            cout << fixed << setprecision(3);
            cout << sqrt(numbers[i]) << endl;
        }
        break;
    case 'B':

        // Display the sum of all values in the array 

        for (int i = 0; i < SIZE; i++) {

            sum += numbers[i];
        }

        cout << fixed << setprecision(2);
        cout << "The sum is: " << sum << ".\n\n";

        break;
    case 'C': 
    
        // Display the average of all values in the array

        for (int i = 0; i < SIZE; i++) {

            sum += numbers[i];
            average = sum / SIZE; 
        }

        cout << fixed << setprecision(3);
        cout << "The average is: " << average << endl << endl;

        break;
    }
}                   // end of doTheMath
// ==========================================================================


// ==========================================================================
/* OUTPUT:
Enter 5 numbers: 
1.0
2.22
3.3
4.0
5.5


A. Display the Square Root of each number.
B. Display the Sum of all numbers.
C. Dsiplay the Average of all numbers.

Enter choice: a


The square roots are:
1.000
1.490
1.817
2.000
2.345
@aberhost0 ➜ /workspaces/CS1A/homework8 (main) $ ./a.out
Enter 5 numbers: 
1.0
2.22
3.3
4.0
5.5


A. Display the Square Root of each number.
B. Display the Sum of all numbers.
C. Dsiplay the Average of all numbers.

Enter choice: b


The sum is: 16.02.

@aberhost0 ➜ /workspaces/CS1A/homework8 (main) $ ./a.out
Enter 5 numbers: 
1.0
2.2
3.3 
4.0
5.5


A. Display the Square Root of each number.
B. Display the Sum of all numbers.
C. Dsiplay the Average of all numbers.

Enter choice: c


The average is: 3.200

@aberhost0 ➜ /workspaces/CS1A/homework8 (main) $ */
// ==========================================================================