// Attached: HW_7b-2
// ==========================================================================
// Program: Calculate Volume
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
using namespace std;

// Function Prototypes
void getDimensions(float& length, float& width, float& depth);
bool areValid(float length, float width, float depth);
float calcVolume(float length, float width, float depth);
void displayVolume(float volume);

// === main =================================================================
int main() { 
    
    // Varliable Definitions
    float length = 0;
    float width = 0;
    float depth = 0;
    float volume = 0;
    bool valid = false;

    // Prompt user input and get validation
    getDimensions(length, width, depth);
    valid = areValid(length, width, depth);

    // Calculate volume and display to user
    volume = calcVolume(length, width, depth);
    displayVolume(volume);

   return 0;
}               // end of main
// ==========================================================================



// Function Definitions

// === getDimensions =========================================================
void getDimensions(float& length, float& width, float& depth) {

    cout << "Enter the dimensions of a swimming pool:\n\n"
         << "Length: ";
    cin >> length;

    cout << "Width: ";
    cin >> width;

    cout << "Depth: ";
    cin >> depth;
}                   // end of getDimensions
// ==========================================================================



// === areValid ==============================================================
bool areValid(float length, float width, float depth) {
    bool valid = true;

    if (!(length > 5 && length < 100)) {
        valid = false;
    }
    else if (!(width > 5 && width < 20)) {
        valid = false;
    }
    else if (!(depth > 1 && depth < 12)) {
        valid = false;
    }
    
    return valid;
}                   // end of areValid
// ==========================================================================



// === calcVolume ============================================================
float calcVolume(float length, float width, float depth) {

    float volume = 0;

    volume = length * width * depth;

    return volume;
}                   // end of calcVolume
// ==========================================================================



// === displayVolume =========================================================
void displayVolume(float volume) {

    cout << "\n\nThe volume of the pool is: " << volume << " cubic feet.\n";
}
// ==========================================================================



// ==========================================================================
/* OUTPUT:
Enter the dimensions of a swimming pool:

Length: 12.5
Width: 22.5
Depth: 8.5


The volume of the pool is: 2390.62 cubic feet. */
// ==========================================================================