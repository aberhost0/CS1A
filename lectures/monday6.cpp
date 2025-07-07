#include <iostream>
using namespace std;

// passing by reference
void getAges(int& yourAge, int& friendAge);     // & - "address of" 
void showAges(int yourAge, int friendAge);

int main() {
    int yourAge = 0;
    int friendAge = 0;

    getAges(yourAge, friendAge);    // pass by reference (pass memory addresses to the function)

    showAges(yourAge, friendAge);   // actual parameters are values sent to the function (arguments)

    return 0;
}

// Local variables have loacal scope & can only be used in the function

void getAges(int& yourAge, int& friendAge) {

    cout << "Enter your age: ";
    cin >> yourAge;

    cout << "Enter your friend's age: ";
    cin >> friendAge;
}
// -------------------------
void showAges(int yourAge, int friendAge) {

    cout << "\nYou are " << yourAge << " and your friend is " << friendAge << ".\n\n";
}