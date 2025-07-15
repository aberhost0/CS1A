#include <iostream>
using namespace std;

int main() {

    const int SIZE = 5;
    int numbers[SIZE] = {2,4,6,8,10};      // Initialization list 

    for (int x = 0; x < SIZE; x++) {

        cout << numbers[x] << endl;
    }

    return 0;
}

// Array is a structured data type and are stored contiguously in memory 
// Initialization list: double scores[5] = {2,3,4,5,6};