// Attached: HW_9a
// ==========================================================================
// Program: CCharacter Arrays vs cStrings
// ==========================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ==========================================================================

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// === main =================================================================
int main() { 
    
    double floatArray[7] = {1.01, 2.02, 3.33, 4.044, 5.5, 6.06, 7.77};
    cout << "(A). The floatArray output using - cout <<\n\t"
         << floatArray << "\n\n";

    /* Expected: The output will be the address of the first [0] index of the array
        Correct or not correct: I was correect, the output was "0x7ffe205ec790" */
    // ======================================================================
    
    cout << "(B). Output of the floatArray values - using a for loop\n\t";

    for (int i = 0; i < 7; i++) {
        cout << floatArray[i] << '\t';
    }
    cout << endl << endl;
    
    /* Expected: The output will be "1.01   2.02    3.33    4.044      5.5     6.06    7.77"
        Correct or not correct: I was correect. */
    // ======================================================================

    int intArray[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    cout << "(C). Output of the intArray values - using cout <<\n\t"
         << intArray << "\n\n";

    /* Expected: The output will be the memory address of the first index of the array
        Correct or not correct: I was correect. */
    // ======================================================================

    cout << "(D). Output of the intArray values using a for loop\n\t";

    for (int i = 0; i < 7; i++) {
        cout << intArray[i] << '\t';
    }
    cout << endl << endl;

    /* Expected: The output will be "1   2   3   4   5   6   7"
        Correct or not correct: I was correect. */
    // ======================================================================

    char cStringArray[8];
    strcpy(cStringArray, "Tom Lee");

    cout << "(E). Output of strcpy assignment to cStringArray - using cout <<\n\t";

    for (int i = 0; i < 7; i++) {
        cout << cStringArray[i];
    }
    cout << endl << endl;

    /* Expected: The output will be "Tom Lee"
        Correct or not correct: I was correect. */
    // ======================================================================

    cout << "(F). Enter a 7-character name to be read by cin.getline(): ";
    cin.getline(cStringArray, 7);
    cout << "\n\tOutput after entering 7 letters - output by cout<<:\n\t";
    cout << cStringArray << endl;

    /* Expected: The output will be what the user entered
        Correct or not correct: I was incorreect, for the output was one character short. */
    // ======================================================================

    char yourName[8];
    strcpy(yourName, "Tom Lee");

    cout << "(G). What is the output when using:\n\t"
         << "strcpy(yourName, \"Tom LEE\"); - and cout << yourName[2]: \n\t";
    cout << yourName[2] << endl;

    /* Expected: The output will be "m"
        Correct or not correct: I was correct. */
    // ======================================================================

    char myName[8] = "Bob Lee";

    cout << "(H). What is the output when using:\n\t"
         << "char myName[8] = \"Bob Lee\"; - and cout << myName[2]: \n\t";
    cout << myName[2] << endl;

    /* Expected: The output will be "b"
        Correct or not correct: I was correct. */
    // ======================================================================

   return 0;
}               // end of main
// ==========================================================================



// ==========================================================================
/* OUTPUT:
(A). The floatArray output using - cout <<
        0x7fffdaa9ce80

(B). Output of the floatArray values - using a for loop
        1.01    2.02    3.33    4.044   5.5     6.06    7.77

(C). Output of the intArray values - using cout <<
        0x7fffdaa9ce60

(D). Output of the intArray values using a for loop
        1       2       3       4       5       6       7

(E). Output of strcpy assignment to cStringArray - using cout <<
        Tom Lee

(F). Enter a 7-character name to be read by cin.getline(): Kyleigh

        Output after entering 7 letters - output by cout<<:
        Kyleig
(G). What is the output when using:
        strcpy(yourName, "Tom LEE"); - and cout << yourName[2]: 
        m
(H). What is the output when using:
        char myName[8] = "Bob Lee"; - and cout << myName[2]: 
        b
@aberhost0 ➜ /workspaces/CS1A/homework9 (main) $ */
// ==========================================================================