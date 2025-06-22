// Attached: HW_4d
// ======================================================================
// Program: Output Files
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() { 
    string integers; 
    ifstream myFile("data.txt");

    cout << "The values in the file are: \n";

    while(getline(myFile, integers)) {
        cout << integers << "\n"; 
    }

    myFile.close();


return 0;
}
// ======================================================================
/* OUTPUT:
The values in the file are: 
12
34
21
36
45
71
@aberhost0 ➜ /workspaces/CS1A/homework4 (main) $ */
// ======================================================================