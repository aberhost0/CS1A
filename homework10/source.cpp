// Attached: HW_10
// ==========================================================================
// Program: Class Student
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include "Student.cpp"
using namespace std;

// === main =================================================================
int main() { 

    int idNum;
    string studentName;
    Student student1;
    Student student2(12345, "Tom Lee");

    // Display the initial attributes of the object - Default Constructor

    cout << "Here is Student #1: \n"
         << "----------------------\n";
    student1.displayStudent();

    cout << "Here is student #2 \n"
         << "----------------------\n";
    student2.displayStudent();

    // Display the set function

    student1.setID(33333);
    student1.setName("Bruce Lee");

    cout << "Here is Student #1: \n"
         << "----------------------\n";   
    student1.displayStudent();

    cout << "Here is student #2 \n"
         << "---------------------\n";
    student2.displayStudent();

    // Display the get function

    idNum = student2.getID();
    cout << "Student #2's ID is: " << idNum << endl << endl;

    studentName = student1.getName();
    cout << "Student #1's name is: " << studentName << endl << endl;

   return 0;
}               // end of main
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Here is Student #1: 
----------------------
ID:     0
Name:


Here is student #2 
----------------------
ID:     12345
Name:   Tom Lee


Here is Student #1: 
----------------------
ID:     33333
Name:   Bruce Lee


Here is student #2 
---------------------
ID:     12345
Name:   Tom Lee


Student #2's ID is: 12345

Student #1's name is: Bruce Lee

@aberhost0 ➜ /workspaces/CS1A/homework10 (main) $ */
// ==========================================================================