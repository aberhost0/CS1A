// Attached: HW_6c
// ======================================================================
// Program: Asterisks
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() { 
   int number;

   cout << "How many asterisks do you want to see? ";
   cin >> number;

    do {
        cout << "*\t";
        number--;
    } while (number > 0);
    cout << endl << endl;

    return 0;
}
// ======================================================================
/* OUTPUT:
How many asterisks do you want to see? 5
*       *       *       *       *

@aberhost0 ➜ /workspaces/CS1A/homework6 (main) $ */
// ======================================================================