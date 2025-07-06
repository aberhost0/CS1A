// Attached: Lab 9
// ==========================================================================
// Program: Function Division 
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
using namespace std;

float getNumerator();
float getDenominator();
float division(float numerator, float denominator);
void display(float numerator, float denominator, float quotient);

// === main =================================================================
int main() { 
    float numerator;
    float denominator;
    float quotient;

    // Ask for user input
    numerator = getNumerator();
    cout << endl;

    denominator = getDenominator();
    cout << endl;

    // Divide the numerator and denominator 
    quotient = division(numerator, denominator);

    // Display result 
    display(numerator, denominator, quotient);

   return 0;
}               // end of main
// ==========================================================================



// === getNumerator =========================================================
float getNumerator() {

    float numerator;

    cout << "Enter the numerator: \n";
    cin >> numerator;

    return numerator;
}
// ==========================================================================



// === getDenominator =======================================================
float getDenominator() {

    float denominator;

    cout << "Enter the denominator: \n";
    cin >> denominator;

    return denominator;
}
// ==========================================================================



// === division =============================================================
float division(float numerator, float denominator) {

    float quotient = numerator / denominator;

    return quotient;
}
// ==========================================================================



// === display ==============================================================
void display(float numerator, float denominator, float quotient) {

    cout << numerator << " divided by " << denominator << " is " << quotient << ".\n";
}
// ==========================================================================
/* OUTPUT:
Enter the numerator: 
9.0

Enter the denominator: 
6.0

9 divided by 6 is 1.5.
@aberhost0 ➜ /workspaces/CS1A/lab9 (main) $ */
// ==========================================================================