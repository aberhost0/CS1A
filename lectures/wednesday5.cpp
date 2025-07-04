#include <iostream>
#include <string>
using namespace std;

int main() {


    return 0;
}
// ----------------------------------------------------------------------------

/* 
string getName();
string getCity();
void showInfo(string name, string city);

int main() {
    string name;
    string city;

    name = getName();
    city = getCity();
    showInfo(name, city);

    return 0;
}                   // end of main()
// =============================================================================

// === getName =================================================================
string getName() {
    string name;

    cout << "What's your name? ";
    getline(cin, name);

    return name;
} // end of getName()
// =============================================================================



// === getCity =================================================================
string getCity() {
    string city;

    cout << "What city do you live in? ";
    getline(cin, city);

    return city;
} // end of getCity
// =============================================================================

void showInfo(string name, string city) {
    cout << "\n\nHello " << name << "!\n" 
    << "I didn't know you lived in " << city << ".\n\n";
} */

// ----------------------------------------------------------------------------

/* 
void displayGreeting(string greeting);

int main() {
    string greeting = "Welcome to ABC Bank.\n\n";

    displayGreeting(greeting);

    return 0;
}

void displayGreeting(string greeting) {
    cout << greeting;
} */

// ----------------------------------------------------------------------------

/* char doYouHaveAPet();
string whatType();
void showResponse(string type);

int main() {
    char answer;
    string type;

    answer = doYouHaveAPet();

    if (toupper(answer) == 'Y')  { 
        type = whatType();
        showResponse(type);
    }
    else {
        cout << "You should get one!\n\n";
    }

    return 0;
}

char doYouHaveAPet() {
    char answer;

    cout << "Do you have a pet (Y or N)? " ;
    cin >> answer; 

    return answer;
}

string whatType() {
    string type;

    cout << "What type of animal is your pet? ";
    cin.ignore();
    getline(cin, type);

    return type;

}

void showResponse(string type) {
    cout << "\nI'm sure you " << type << " is nice.\n\n";
} */

