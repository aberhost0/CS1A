// Attached: Lab_1b
// ======================================================================
// Program: Names
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================
#include <iostream>
using namespace std;

int main() {
    string firstName;
    string lastName; 
    string friendName;
    char firstInitial;
    char middleInitial;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Hi " << firstName << " " << lastName << ". What is the last name of your friend? ";
    cin >> friendName;
    cout << "What is their first initial? ";
    cin >> firstInitial;
    cout << "Wait a minute, what is their middle initial? ";
    cin >> middleInitial;
    cout << "I cannot believe your friend is " << firstInitial << " " << middleInitial << " " << friendName << ".";
    cout << endl;

    return 0;  
}
// ======================================================================
/* OUTPUT:
Enter your first name: Alyssa
Enter your last name: Berhost
Hi Alyssa Berhost. What is the last name of your friend? Simpson 
What is their first initial? O
Wait a minute, what is their middle initial? J
I cannot believe your friend is O J Simpson.
@aberhost0 ➜ /workspaces/CS1A/Lab_1b (main) $   */
// ======================================================================