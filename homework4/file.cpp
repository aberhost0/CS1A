// Attached: HW_4c
// ======================================================================
// Program: File Input
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <fstream> 
using namespace std;

int main() { 
    int num1;
    int num2;
    int num3;
    ofstream myFile; 

    cout << "Enter three integers:\n";
    cin >> num1 >> num2 >> num3;

    myFile.open("data.txt");

    if(myFile.fail()) {
        cout << "File did not open\n";
        exit(1);
    }

    myFile << num1 << endl << num2 << endl << num3;

    myFile.close();

return 0;
}
// ======================================================================
/* OUTPUT:
Enter three integers:
12
34
21
@aberhost0 ➜ /workspaces/CS1A/homework4 (main) $ */
// ======================================================================