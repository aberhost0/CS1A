#include <iostream>
using namespace std;        // The compiler parses the code into tokens

// #1 - Function prototypes above main()
int getAge();
void showAge(int age);

int main() {
    int age = 0;

    // #2 - Function calls inside main()
    age = getAge();
    showAge(age);

    return 0;
}

// #3 - Function definitions are after main()
int getAge() {
    cout << "Enter your age: ";
    cin >> age;
}
void showAge(int age) {
    cout << "So you are " << age << " years old.\n\n";
}