#include <iostream>
#include <string>
using namespace std;

int getNumber();
int addNumbers(int num1, int num2, int num3);
void showTotal(int total);

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int total = 0;

    cout << "Enter three numbers.\n\n"
        << "#1:\n";
    num1 = getNumber();

    cout << "\n#2:\n";
    num2 = getNumber();

    cout << "\n#3:\n";
    num3 = getNumber();

    total = addNumbers(num1, num2, num3);

    showTotal(total);

    return 0;
}
// === getNumber ===============================================================
int getNumber() {
    int number = 0;

    cout << "Enter the number: ";
    cin >> number;

    return number;
}
// ==============================================================================



// === addNumbers ===============================================================
int addNumbers(int num1, int num2, int num3) {
    int sum = 0;

    sum = num1 + num2 + num3;

    return sum;
}
// ==============================================================================



// === showTotal ================================================================
void showTotal(int total) {
    cout << "\nThe sum of the numbers is " << total << ".\n\n";
}
// ===============================================================================

// ----------------------------------------------------------------------------

/* string getFirst();
string getMiddle();
string getLast();
void showFullName(string first, string middle, string last);

int main() {
    string first;
    string middle;
    string last;

    first = getFirst();
    middle = getMiddle();
    last = getLast();
    showFullName(first, middle, last);

    return 0;
}
// ---------------------
string getFirst() {
    string first;

    cout << "Enter your first name: ";
    getline(cin, first);

    return first;
}
// ---------------------
string getMiddle() {
    string middle;

    cout << "Enter your middle name: ";
    // cin.ignore();
    getline(cin, middle);

    return middle;
}
// ---------------------
string getLast() {
    string last;

    cout << "Enter your last name: ";
    // cin.ignore();
    getline(cin, last);

    return last;
} 
// ---------------------
void showFullName(string first, string middle, string last) {
    cout << "Hi " << first << " " << middle << " " << last << ".\n\n";
} */

// ----------------------------------------------------------------------------

/* 
float getRadius();
float calcArea(float radius, float pi);
void displayArea(float area);
string enterLast();
char enterMidInitial();
string enterFirst();
void showInfo(string firstName, char initial, string lastName);

int main() {
    float radius;
    float pi = 3.14;
    float area;
    char initial;
    string lastName;
    string firstName;

    // Function Calls
    radius = getRadius();
    area = calcArea(raduis, pi);
    displayArea(area);
    lastName = enterLast();
    initial = enterMidInitial();
    fistName = enterFirst();
    showInfo(firstName, initial, lastName);

    return 0;
} */

// ----------------------------------------------------------------------------

 /* Practicing Function Calls

 void showMenu();
 char getChoice();
 void showResult(char choice);
 string getName();
 string getCity();
 void displayInfo(string name, string city);

 int main() {
    char choice;
    string name;
    string city;

    // Write the six function calls based on the 6 function prototypes and the variables
    showMenu();     // standalone function call
    choice = getChoice();
    showResult(choice);
    name = getName();
    city = getCity();
    displayInfo(name, city);

    return 0;
 } */