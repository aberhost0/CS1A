#include <iostream>
using namespace std;

int main() {
    int number = 1;

    do {
        cout << number << endl;
        number++;
    } while (number < 11);

    return 0;
}

// -----------------------------------------------------------------------------------------

/* Sentinal Control While Loop
int main() {
    char answer = 'Y';
    int number = 0;

    cout << "Enter a number a get the square of the number.\n\n";

    while (toupper(answer) == 'Y') {
        cout << "Enter a number: ";
        cin >> number;

        cout << "The square of " << number << " equals " << number * number << endl << endl;

        cout << "Do it again (Y or N)? ";
        cin >> answer;
    }

    return 0;
} */

// -----------------------------------------------------------------------------------------

/* int main() {
    char answer = '\0';
    char character = '\0';
    int number = 0;

    cout << "Do you want to see all ASCII characters from 0 to 127 (Y or N)? ";
    cin >> answer;

    if (toupper(answer) == 'Y') {

        while (number < 128) {
            cout << character << '\t';
            character++;
            number++;
        }
        cout << endl;
    }

    return 0;
} */ 

// -----------------------------------------------------------------------------------------

/* int main() {
    char letter = 'A';

    cout << "Here are all the uppercase alphabetic characters:\n";

    while (letter <= 'Z') {
        if (letter % 5 == 0) {
            cout << endl;
        }
        cout << letter << '\t';
        letter++;
    }
    cout << endl;

    return 0;
} */

// -----------------------------------------------------------------------------------------

/*   Count-Controlled While Loop
int main() {
    int number = 1;

    // If logical expressions evaluate to true, then the while block will execute
    cout << "Here are all the even numbers from 1 to 100:\n";

    while (number <= 100) {
        
        if (number % 2 == 0) {

            cout << number << '\t';
        }
        number++;
    }
    cout << endl;

    return 0;
} */