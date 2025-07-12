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
    string line;
    char choice1 = '\0';
    char choice2 = '\0';
    char again = '\0';

    do {
        getChoices(choice1, choice2); 

        if (toupper(choice1) == 'A') {

            infile.open("lincoln.txt");

            if(infile.fail()) {
                cout << "Error";
                exit(1);
            }
        }
        else if (toupper(choice1) == 'B') {

            infile.open("kennedy.txt");

            if(infile.fail()) {
                cout << "Error";
                exit(1);
            }
        }
        else {
            cout << "Invalid entry...Must be A or B.\nGoodbye...\n\n";
        }

        if (toupper(choice2) == 'C') {

            outfile.open("new.txt");

            while (getline(infile, line)) {

                outfile << line << endl;
            }
            outfile.close();
            cout << "\nSpeech has been written to new.txt";
        }
        else if (toupper(choice2) == 'D') {

            cout << "\n------ Speech Output ------\n\n";

            while (getline(infile, line)) {

                cout << line << endl;
            }
        }
        else {
            cout << "Invalid output choice...Must be C or D.\nGoodbye.\n\n";
        }

        infile.close();

        cout << "\nRun again? (Y/N): ";
        cin >> again;
    }
    while (toupper(again) == 'Y');

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

    cout << "\nWhat do you want to do with the data?\n" 
         << "\nC. Write the data to a new file?"
         << "\nD. Display it on the screen?"
         << "\n\nEnter choice: ";
    cin >> choice2;

}   // end of getChoices
// ==========================================================================



// ==========================================================================
/* OUTPUT:
What speech do you want to read?

A. Read the file containing a speach by Lincoln.
B. Read the file containing a speech by Kennedy.

Enter choice: b

What do you want to do with the data?

C. Write the data to a new file?
D. Display it on the screen?

Enter choice: c

Speech has been written to new.txt
Run again? (Y/N): y
What speech do you want to read?

A. Read the file containing a speach by Lincoln.
B. Read the file containing a speech by Kennedy.

Enter choice: a

What do you want to do with the data?

C. Write the data to a new file?
D. Display it on the screen?

Enter choice: d

------ Speech Output ------

Four score and seven years ago our fathers brought forth on this continent
a new nation, conceived in liberty and dedicated to the proposition that
all men are created equal.

Run again? (Y/N): y
What speech do you want to read?

A. Read the file containing a speach by Lincoln.
B. Read the file containing a speech by Kennedy.

Enter choice: b

What do you want to do with the data?

C. Write the data to a new file?
D. Display it on the screen?

Enter choice: d

------ Speech Output ------

Ask not what your country can do for you,
but rather, what you can do for your country.

Run again? (Y/N): n
@aberhost0 ➜ /workspaces/CS1A/homework7b (main) $ */
// ==========================================================================