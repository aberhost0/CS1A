// Attached: HW_4b
// ======================================================================
// Program: Name
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
#include <string> 
using namespace std;

int main() { 
   int age = 0;
   string name;

   cout << "Please enter your age and press Enter: ";
   cin >> age;
   cin.ignore();

   cout << "Please enter your first and last name and press Enter: ";
   getline(cin, name);

   cout << "Your name is " << name << ", and you are " << age << " years old" << endl;

return 0;
}
// ======================================================================
/* OUTPUT:
Please enter your age and press Enter: 39
Please enter your first and last name and press Enter: Tom Lee
Your name is Tom Lee, and you are 39 years old
@aberhost0 ➜ /workspaces/CS1A/homework4 (main) $ */
// ======================================================================