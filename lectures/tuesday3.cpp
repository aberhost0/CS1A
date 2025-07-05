#include <iostream>
#include <fstream>
using namespace std;

// int main() {


//     return 0;
// }


/*#include <fstream>                         // include file stream 
using namespace std;

int main() {
    ifstream infile;                        // Create input file object 

    infile.open("c:\folder\data.txt");      // Open file

    infile >> number;                       // Read file

    infile.close();                         // Close file 

    return 0;
}*/



int main() {
    char key;
    char letter = 'e';
    int total = 0;

    cout << "Enter the Gettysburg Address: ";
    cin.get(key);       //Four score and seven years ago...

    while(key != '\n') {
        if(key == 'e'){
            total = total + 1;
        }
        cin.get(key);
    }
    cout << "There are " << total << " e's " << "in this message." << endl;

    return 0;
} 


/*int main() {
    char key;

    cout << "Press any key: ";
    cin.get(key);                          // cin >> key;

    cout << "You entered " << key << endl << endl; 

    return 0;
} */


/*int main(){
    string message;
    char answer;

    cout << "Do you want to enter and then see an important message (Y or N)? ";   // Y
    cin >> answer;
    cin.ignore();           // clears the keyboard buffer 

    if(answer == 'Y' || answer == 'y'){
        cout << "Enter an important message: "; // Roses are red and violets are blue.
        getline(cin, message);

        cout << "The message is: " << message << endl << endl;
    }
    else {
        cout << "OK. \n\n";
    }
    
    return 0;
} */