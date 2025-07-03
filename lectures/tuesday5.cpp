#include <iostream>
#include <string>
using namespace std;  

void displayMenu();
char getChoice();
void showResult(char choice);

int main() {
    char choice;

    displayMenu();
    choice = getChoice();
    showResult(choice);

    return 0;
}

void displayMenu() {
    cout << "A. Go surfing!\n"
        << "B. Go snowboardin!\n"
        << "C. Water Skiing!\n\n";
}

char getChoice() {
    char choice;

    cout << "Which is your favorite (A, B, or C)? ";
    cin >> choice;
    cout << endl;

    return choice;
}

void showResult(char choice) {
    switch (toupper(choice))
    {
    case 'A': cout << "Surfing is spectacular!\n\n";
        break;
    case 'B': cout << "Snowboarding is fun!\n\n";
        break;
    case 'C': cout << "Water skiing is killer when the water is glassy!\n\n";
        break;
    default: cout << "Invalid entry. Must be A, B, or C.\n\n";
    }
    
}

// -----------------------------------------------------------------------------------

 /* Function Practice 
string getName();
void showName(string name);

int main() {
    string name;

    name = getName();
    showName(name);

    return 0;
}

string getName() {
    string name;

    cout << "What's your name? ";
    getline(cin, name);

    return name;
}

void showName(string name) {
    cout << "Hello " << name << "!\n\n";
} */

// -----------------------------------------------------------------------------------

/* Function Intro
    // The compiler parses the code into tokens
    // #1 - Function prototypes above main()
int getAge();
void showAge(int age);  // age is a formal parameter

int main() {
    int age = 0;

    // #2 - Function calls inside main()
    age = getAge();
    // Stand-alone function call (void functions)
    // age is an actual parameter (argument) in the function call
    showAge(age);

    cout << "Goodbye!\n\n";

    return 0;
}

// #3 - Function definitions are after main()
// Each function has its own scope
int getAge() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    // All non-void functions must have a return statement
    return age;
}

void showAge(int age) {
    cout << "So you are " << age << " years old.\n\n";
} */