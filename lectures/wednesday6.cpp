#include <iostream>
#include <string>
using namespace std;

const int NUM_3 = 1;    // Global variables have global scope

int main() {

    int num1 = 2;       // Local variable has local scope (limited to its block)

    if (num1 > 0) {

        int num2 = 3;

        cout << num1 << endl << num2 << endl << endl;
    }

    return 0;
}

// ---------------------------------------------------------------------------------

/* Intro to Header Files
#include "prototypes.h"

int main() {

    string city;
    int year;

    getInfo(city, year);
    displayInfo(city, year);

    return 0;
}
// -------------------------------------
void getInfo(string& city, int& year) {

    cout << "In what city do you live? ";
    getline(cin, city);
    cout << "What year did you move to " << city << "? ";
    cin >> year;
}
// -------------------------------------
void displayInfo(string city, int year) {

    cout << "So you moved to " << city << " in " << year << ".\n\n";
}*/
