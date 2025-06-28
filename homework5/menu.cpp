// Attached: HW_5c
// ======================================================================
// Program: Show Menu
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() { 
    int choice = 0;

    cout << "---------- MENU ----------\n\n" 
        << "1.\tLobster\n" 
        << "2.\tSteak\n" 
        << "3.\tTurkey\n"
        << "4.\tHambuger\n"
        << "5.\tVegetarian Sandwich\n";

    cout << "\nChose your dinner entree: ";
    cin >> choice;

    switch (choice)
    {
    case 1: cout << "\nAn excellent seafood choice!" << endl << endl;
        break;
    case 2: cout << "\nTop grade sirloin - the best!" << endl << endl;
        break;
    case 3: cout << "\nA Thanksgiving feast." << endl << endl;
        break;
    case 4: cout << "\nWorld's best burger!" << endl << endl;
        break;
    case 5: cout << "\nOh, so you're one of those..." << endl << endl;
        break;
    default: cout << "\nThat is not on the menu...Goodbye" << endl << endl;
    }

    return 0;
}
// ======================================================================
/* OUTPUT:
---------- MENU ----------

1.      Lobster
2.      Steak
3.      Turkey
4.      Hamburger
5.      Vegetarian Sandwich

Choose your dinner entree: 5

Oh, so you're one of those...

@aberhost0 ➜ /workspaces/CS1A/homework5 (main) $ */
// ======================================================================