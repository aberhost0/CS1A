// Attached: HW_6a
// ======================================================================
// Program: Do Your Homework
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "How many times do you need to be reminded?\t";
    cin >> number;
    cout << endl << endl;

    for (int x = 1; x <=number; x++) {
        cout << "#" << number << ":\tDo your homework!\n";
    }

    return 0;
}
// ======================================================================
/* OUTPUT:
How many times do you need to be reminded?      5


#5:     Do your homework!
#5:     Do your homework!
#5:     Do your homework!
#5:     Do your homework!
#5:     Do your homework!
@aberhost0 ➜ /workspaces/CS1A/homework6 (main) $ */
// ======================================================================
