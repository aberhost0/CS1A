// Attached: Lab_6
// ======================================================================
// Program: Reading Files using a Loop
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() { 
    int sum = 0;
    int number = 0;
    ifstream infile;

    infile.open("numbers.txt");

    if (infile.fail()) {
        cout << "An error has occurred..." << endl;
        exit (EXIT_FAILURE);
    }
    while (!infile.eof()) {
        infile >> number;
        sum = sum + number;
    }
    infile.close();

    cout << "The sum of the numbers is " << sum << "." << endl << endl;

return 0;
}
// ======================================================================
/* OUTPUT:
The sum of the numbers is 1073.

@aberhost0 ➜ /workspaces/CS1A/lab6 (main) $ */
// ======================================================================