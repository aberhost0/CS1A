// Attached: HW_6b
// ======================================================================
// Program: Display the Alphabet
// ======================================================================
// Programmer: Alyssa Berhost
// Class: CS 1A
// ======================================================================

#include <iostream>
using namespace std;

int main() { 
   char answer = '\0';
   char letter = '\0';

   cout << "Do you want to see the alphabet in (U)ppercase or (L)owercase? ";
   cin >> answer;

   answer = toupper(answer);

   if (answer == 'U') {

        letter = 'A';

        do {
            cout << letter << '\t';
            letter++;

            if (letter % 5 == 0) {
                cout << '\n';
            }
        } while (letter <= 'Z');
   }
   if (answer == 'L') {

        letter = 'a';

        do {
            cout << letter << '\t';
            letter++;

            if (letter % 5 == 0) {
                cout << '\n';
            }
        } while (letter <= 'z');
   }
   cout << endl << endl;

    return 0;
}
// ======================================================================
/* OUTPUT:
Do you want to see the alphabet in (U)ppercase or (L)owercase? u
A       B       C       D       E
F       G       H       I       J
K       L       M       N       O
P       Q       R       S       T
U       V       W       X       Y
Z

@aberhost0 ➜ /workspaces/CS1A/homework6 (main) $ 
Do you want to see the alphabet in (U)ppercase or (L)owercase? l
a       b       c
d       e       f       g       h
i       j       k       l       m
n       o       p       q       r
s       t       u       v       w
x       y       z

@aberhost0 ➜ /workspaces/CS1A/homework6 (main) $ */
// ======================================================================