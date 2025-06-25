#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int num = 0;
lab1b
    cout << "E"

    return 0;
}

// ------------------------------------------------------------------------

/* toupper() Function 
int main() {
    string message = "Elvis is alive!\n\n";
    char answer;

    cout << "Do you want to see an important message (Y or N)? ";
    cin >> answer;

    // if (answer == 'Y' || answer == 'y') { 
    if (toupper(answer) == 'Y') {
        cout << message;
    }
    else {
        cout << "Okay, sounds good.\n\n";
    }

    return 0;
} */

// ------------------------------------------------------------------------

/* Multiple Else If
int main() {
    int testScore = 0;

    cout << "Enter your test score: ";
    cin >> testScore;

    if (testScore > 100 || testScore < 0) {
        cout << "Invalid input. Score must be >= 0 and <= 100.\n\n";
    }
    else if (testScore >= 90) {
        cout << "Grade = A\n\n";
    }
    else if (testScore >= 80) {
        cout << "Grade = B\n\n";
    }
    else if (testScore >= 70) {
        cout << "Grade = C";
    }
    else if (testScore >= 60) {
        cout << "Grade = D";
    }
    else {
        cout << "Grade = F";
    }

    return 0;
} */

// ------------------------------------------------------------------------

/* Else if 
int main() {
    float testScore = 0.0;

    cout << "Enter your test score: ";
    cin >> testScore;

    // OR operator ||
    if (testScore > 100 || testScore < 0) {
        cout << "Invalid input. Must be >= 0 and <= 100.\n\n";
    }
    else if (testScore >= 69.5) {
        cout << "Credit!\n";
    }
    else {
        cout << "No credit\n\n";
    }
    cout << "Goodbye...\n";

    return 0; 
} */

// ------------------------------------------------------------------------

/* If Selection Statement 
int main() {
    float testScore = 0.0;

    cout << "Enter your test score: ";
    cin >> testScore;

    // AND operator &&
    if (testScore >= 69.5 && testScore <= 100) {
        cout << "Credit\n\n";
    }
    else {
        cout << "No credit\n\n";
    }
    cout << "Goodbye\n\n";

    return 0; 
} */