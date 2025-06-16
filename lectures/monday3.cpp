#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << name << " is " << age << " years old.\n\n";

    return 0;
}

/*int main() {
    int num1 = 3;
    float num2 = 123.456;
    float num3 = 0.12;

    cout << fixed << setprecision(2);

    // setw(0) aligns to the right and works backwards to the left
    cout << setw(10) << num1 << endl << setw(10) << num2 << endl << setw(10) << num3 << endl << endl;

    return 0;
}*/
 
// --------------------------------------------------------------------------------------

/*int main() {
    int num1 = 3;
    int num2 = 2;

    // when 2 arguments are being passed to the function (pow), the function is called
    // pow returns a float to five denimals unless other wise stated 
    cout << fixed << setprecision(1);
    cout << num1 << " raised to a power of " << num2 << " = " << pow(num1, num2)
        << endl << endl;
    
    return 0;
}*/

// --------------------------------------------------------------------------------------

/*int main() {
    int num1 = 0;       // known or safe value
    int num2 = 0;
    int result = 0;

    // cin >>   -   cin represent the keyboard     
    // >> extraction operator "extracts" from the keyboard and puts it in a variable
    cout << "Enter the first value: ";
    cin >> num1;    // 3

    cout << "Enter the second value: ";
    cin >> num2;    // 5

    // (or) result = num1 + num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl
        << "with a reminder of " << num1 % num2 << endl << endl;

    return 0;
}*/