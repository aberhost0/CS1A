// Attached: HW_7a1
// =============================================================================
// Program: Right Triangle
// =============================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// =============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float getSide();
float calcSideC(float sideA, float sideB, float sideC);
void displaySideC(float sideC);

// === main ====================================================================
int main() { 
    float sideA;
    float sideB;
    float sideC;

    cout << "Enter two sides of a right triangle:\n\n";

    cout << "Side A:\n";
    sideA = getSide();

    cout << "\nSide B:\n";
    sideB = getSide();

    sideC = calcSideC(sideA, sideB, sideC);

    displaySideC(sideC);

    return 0;
}               // end of main
// =============================================================================



// === getSide =================================================================
float getSide() {
    float side;

    cout << "Please enter the dimension: ";
    cin >> side;

    return side;
}  // end of getSide
// =============================================================================



// === calcSideC ================================================================
float calcSideC(float sideA, float sideB, float sideC) {
    float temp;

    temp = pow(sideA, 2) + pow(sideB, 2);
    sideC = sqrt(temp);

    return sideC;
}   // end of calcSideC
// =============================================================================



// === displaySideC ============================================================
void displaySideC(float sideC) {
    cout << fixed << setprecision(1);
    cout << "\nThe dimension of Side C is: " << sideC << "\n\n";
}   // end of displaySideC
// =============================================================================



// =============================================================================
/* OUTPUT:
Enter two sides of a right triangle:

Side A:
Please enter the dimension: 3.0

Side B:
Please enter the dimension: 4.0

The dimension of Side C is: 5.0

@aberhost0 ➜ /workspaces/CS1A/homework7a (main) $ */
// =============================================================================