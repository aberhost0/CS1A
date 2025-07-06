// Attached: Lab 8
// ==========================================================================
// Program: Reading Files
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

// === main =================================================================
int main() { 
    ifstream infile;
    ofstream outfile;
    string file;
    double num;
    double sqrRoot;
    char choice;

    do {
        // User enters desired file to access 
        cout << "What file do you want to read? (a, b, c.txt)? ";
        cin >> file;
        cout << endl;

        infile.open(file);

        // Check the fail state
        if(outfile.fail()) {
            cout << "Error! File did not open.\n"
                 << "Now closing program...\n";
            exit(EXIT_FAILURE);
        }
        
        cout << "The file has been read.\n\n";

        // Open file for square roots
        outfile.open("squareRoots.txt");

        // Check the fail state
        if(outfile.fail()) {
            cout << "Error! File did not open.\n"
                 << "Now closing program...\n";
            exit(EXIT_FAILURE);
        }
        
        // Read the file entered by the user
        while (!infile.eof()) {

            // Calculate the square root
            infile >> num;
            sqrRoot = sqrt(num);

            // Output square root to new file
            outfile << fixed << setprecision(2) << sqrRoot << endl;
        }

        cout << "The square roots have been written to the file squareRoots.txt\n";

        infile.close();
        outfile.close();

        cout << "\nRun the program again (Y/N)? ";
        cin >> choice;

        if (toupper(choice) == 'Y') {
            
            system("clear");
        }

    } while (toupper(choice) == 'Y');

   return 0;
}               // end of main
// ==========================================================================



// ==========================================================================
/* OUTPUT:
What file do you want to read? (a, b, c.txt)? a.txt

The file has been read.

The square roots have been written to the file squareRoots.txt

Run the program again (Y/N)? y

---- screen clears ---- 
What file do you want to read? (a, b, c.txt)? b.txt

The file has been read.

The square roots have been written to the file squareRoots.txt

Run the program again (Y/N)? y

---- screen clears ----
What file do you want to read? (a, b, c.txt)? c.txt

The file has been read.

The square roots have been written to the file squareRoots.txt

Run the program again (Y/N)? n
@aberhost0 ➜ /workspaces/CS1A/lab8 (main) $ */
// ==========================================================================