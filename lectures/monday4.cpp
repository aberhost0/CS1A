#include <iostream>
#include <string>
#include <fstream>                           
using namespace std; 

int main() { 
    ifstream infile;
    string city;

    infile.open("cities.txt");

    cout << "Here are the cities in the file:\n";
    while(!infile.eof()) {
        cout << city << endl;
    }
    return 0;
}

// -----------------------------------------------------------------------------

/* While Loop through a File
int main() {
    int number = 0;
    int sum = 0;
    ifstream infile;

    infile.open("numbers.txt");

    if(infile.fail()) {
        cout << "Error opening file." << endl;
        exit(EXIT_FAILURE);
    }

    // logical expression evaluates to true or false 
    // One loop is one iteration
    while(!infile.eof()) {
        infile >> number;
        
        sum = sum + number;
    }
    infile.close();

    cout << "\nThe sum of all the numbers is " << sum << endl << endl;

    return 0;
} */

// -----------------------------------------------------------------------------

/* While Loop Intro 
int main() {
    char answer = 'Y';
    int number = 0;
    int sum = 0;
    // ifstream infile;

    // infile.open("numbers.txt");
    cout << "Enter some numbers.\n";

    // logical expression evaluates to true or false 
    while(answer == 'Y' || answer == 'y') {
        cin >> number;
        
        sum = sum + number;

        cout << "Enter another number (Y or N)? ";
        cin >> answer;
    }
    cout << "\nThe sum of all the numbers is " << sum << endl << endl;

    return 0;
} */

// -----------------------------------------------------------------------------

/* Input to prgram from file
int main() {
    string age = "";
    string name = "";
    ifstream infile;                         // Step 2 - Declare an input file object

    cout << "Age: " << age << endl << "Name: " << name << endl << endl;
    
    infile.open("records.txt");             // Step 3 - Open the file

    if(infile.fail()) {
        cout << "Error";

        exit(EXIT_FAILURE);
    }

    getline(infile, age);                    // Step 4 - Read the file
    getline(infile, name);

    infile.close();                          // Step 5 - Close the file

    cout << age << endl << name << endl << endl;

    return 0;
} */

// -----------------------------------------------------------------------------

/* Oufile - Output to a file
int main() {
    int age = 22;
    string name = "Kim Adams";

    ofstream outfile;                                           // Step 2 - Declare an object for output

    outfile.open("records.txt");                                // Step 3 - Open the file
    
    // Check the fail state
    if(outfile.fail()) {
        cout << "Error! File did not open.\n"
            << "Now closing program...\n";
        exit(EXIT_FAILURE);
    }

    outfile << "Age: " << age << endl << "Name: " << name;      // Step 4 - Write to file

    outfile.close();                                            // Step 5 - Close the file

    return 0;
}*/