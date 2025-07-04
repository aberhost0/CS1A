// Attached: HW_7b
// =============================================================================
// Program: Divisors
// =============================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// =============================================================================


#include <iostream>
#include <iomanip>
using namespace std;

int getDivisor();
void findNumbers(int divisor);
int calcSquare(int number);

// === main ====================================================================
int main() { 
    int divisor;

    divisor = getDivisor();

    cout << "\nHere are the numbers, from 0 to 100, that are "
         << "\nevenly divisible by " << divisor << " and their squares:\n\n";
    
    findNumbers(divisor);

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
void findNumbers(int divisor) {
    
    // Iterates from 0 to 100
    for (int i = 0; i <= 100; i++) {

        if (i % divisor == 0) {

            cout << right << setw(5) << i  << "\t" << setw(5) << calcSquare(i) << "\n";
        }

    }

}   // end of findNumbers
// =============================================================================



// === calcSquare ==============================================================
int calcSquare(int number) {
    return number * number;
}                   // end of calcSquare 
// =============================================================================



// =============================================================================
/* OUTPUT:
Enter a divisor: 15

Here are the numbers, from 0 to 100, that are 
evenly divisible by 15 and their squares:

    0       0
   15     225
   30     900
   45    2025
   60    3600
   75    5625
   90    8100
@aberhost0 ➜ /workspaces/CS1A/homework7a (main) $ */
// =============================================================================