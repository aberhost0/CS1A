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
        // cout << "What file do you want to read? (a, b, c.txt)? ";
        // cin >> file;
        // cout << endl;

        infile.open("a.txt");

        // Check the fail state
        if(outfile.fail()) {
            cout << "Error! File did not open.\n"
                << "Now closing program...\n";
            exit(EXIT_FAILURE);
        }
        else {
            cout << "The file has been read.\n\n";
        }

        // Read the file entered by the user
        while (!infile.eof()) {

            infile >> num;

            // Calculate the square root
            sqrRoot = sqrt(num);

            // Output square roots into a new file
            outfile.open("squareRoots.txt");

            // Check the fail state
            if(outfile.fail()) {
                cout << "Error! File did not open.\n"
                        << "Now closing program...\n";
                exit(EXIT_FAILURE);
            }
            
            outfile << fixed << setprecision(2) << sqrRoot << endl;

            outfile.close();
        }

        cout << "Run the program again (Y/N)? ";
        cin >> choice;

    } while (toupper(choice) == 'Y');

   return 0;
}               // end of main
// ==========================================================================



// ==========================================================================
/* OUTPUT:
*/
// ==========================================================================