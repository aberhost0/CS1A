// Attached: HW_7b-1c
// ==========================================================================
// Program: 
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
using namespace std;

bool getData(int& width, int& height);
bool isDataValid(int& width, int& height);
void printBox(int&width, int& height);

// === main =================================================================
int main() { 
    
    if (isDataValid(width, height) == true) {

        printBox();
    }

   return 0;
}               // end of main
// ==========================================================================



// === getData ==============================================================
bool getData(int& width, int& height) {

    bool validData = true;

    cout << "This program will draw a rectangular box in stars.\n\n"
         << "The size of the box will be determined by the width and height"
         << endl << "that you specify\n\n"
         << "Enter integer values, because the width reoresents the\n"
         << "number of columns, and the height represents the number of rows."
         << "\n\nThe width should not exceed 79, because 80 is the "
         << "maximum screen\n" << "width. Both width and height must be "
         << "at least 1.\n\n";

    cout << "Please enter a width: ";
    cin >> width;
    cout << "Please enter a height: ";
    cin >> height;
    cout << endl << endl;

    return validData = isDataValid(width, height);
}
// ==========================================================================



// === isDataValid ==========================================================
bool isDataValid(int& width, int& height) {

    if ((width >= 1 && width < 80) && (height >= 1)) {
        
        return true;
    }
    else { 
        return false;
    }
}   // end of isDataValid
// ==========================================================================



// === printBox =============================================================
void printBox(int&width, int& height) {

    
}
// ==========================================================================



// ==========================================================================
/* OUTPUT:
*/
// ==========================================================================