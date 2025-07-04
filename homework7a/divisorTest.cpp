// Attached: HW_7b
// =============================================================================
// Program: Divisors
// =============================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// =============================================================================


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int getDivisor();
int findNumbers(int divisor, int number);
int calcSquare(int number);

// === main ====================================================================
int main() { 
    int divisor;
    int number;
    int square;

    divisor = getDivisor();

    cout << "\nHere are the numbers, from 0 to 100, that are "
        << "\nevenly divisible by " << divisor << " and their squares:\n\n";

    number = findNumbers(divisor, number);
    square = calcSquare(number);

    return 0;
}               // end of main
// =============================================================================



// === getDivisor ==============================================================
int getDivisor(){
    int divisor;

    cout << "Enter a divisor: ";
    cin >> divisor;

    return divisor;
}                   // end of getDivisor
// =============================================================================



// === findNumbers =============================================================
int findNumbers(int divisor, int number) {
    int square;

    // Iterates from 0 to outer range
    for (int x = 0; x <= 100; x++) {

        // Checking if evenly divisible  
        if (x % divisor == 0) {

            number = x;
            square = calcSquare(number);

            cout << number << "\t" << right << setw(5) << square << "\n";
        }
    }

    return number;
}                   // end of findNumbers
// =============================================================================



// === calcSquare ==============================================================
int calcSquare(int number) {
    int square;

    square = pow(number, 2);

    return square;
}                   // end of calcSquare 
// =============================================================================



// =============================================================================
/* OUTPUT:
Enter a divisor: 15

Here are the numbers, from 0 to 100, that are 
evenly divisible by 15 and their squares:

0           0
15        225
30        900
45       2025
60       3600
75       5625
90       8100
@aberhost0 ➜ /workspaces/CS1A/homework7a (main) $ */
// =============================================================================