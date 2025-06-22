// Attached: Lab_4
// ======================================================================
// Program: Files
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main() { 
    double num1;
    double num2;
    double num3; 
    ofstream textFile;

    cout << "Enter 3 values of doube data type: \n";
    cout << "#1) ";
    cin >> num1;
    cout << "#2) ";
    cin >> num2;
    cout << "#3) ";
    cin >> num3;

    textFile.open("numbers.txt");
     if(textFile.fail()) {
        cout << "File did not open\n";
        exit(1);
    }

    textFile << num1 << endl << num2 << endl << num3 << endl;
    
    textFile.close();

    cout << "The numbers have been written to a file." << endl;

return 0;
}
// ======================================================================
/* OUTPUT:
Enter 3 values of doube data type: 
#1) 4
#2) 2
#3) 25
The numbers have been written to a file.
@aberhost0 ➜ /workspaces/CS1A/lab4 (main) $ */
// ======================================================================