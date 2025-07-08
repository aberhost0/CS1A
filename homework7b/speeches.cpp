// Attached: HW_7b-1a
// ==========================================================================
// Program: Presidents' Speeches
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <fstream>
using namespace std;

void getChoices(char& choice1, char& choice2);

// === main =================================================================
int main() { 
    
    ifstream infile;
    ofstream outfile;
    char choice1 = '\0';
    char choice2 = '\0';

    if (toupper(choice1) == 'A') {

        infile.open("lincoln.txt");

        if(infile.fail()) {
            cout << "Error";

            exit(EXIT_FAILURE);
        }
    }
    else if (toupper(choice1 == 'B')) {

        infile.open("kennedy.txt");

        xc
    }
    else {

        cout << "Invalid entry...Must be A or B.\nGoodbye...\n\n";
    }

    if (toupper(choice2) == 'C') {

        outfile.open("new.txt");

        if(infile.fail()) {
            cout << "Error";

            exit(EXIT_FAILURE);
        }
    }

   return 0;
}               // end of main
// ==========================================================================



// === getChoices ============================================================
void getChoices(char& choice1, char& choice2) {

     cout << "What speech do you want to read?\n"
         << "\nA. Read the file containing a speach by Lincoln."
         << "\nB. Read the file containing a speech by Kennedy."
         << "\n\nEnter choice: ";
    cin >> choice1;

    cout << "What do you want to do with the data?" <<
         << "\nC. Write the data to a new file?"
         << "\nD. Display it on the screen?"
         << "\n\nEnter choice: ";
    cin >> choice2;
}   // end of getChoices
// ==========================================================================



// ==========================================================================
/* OUTPUT:
*/
// ==========================================================================