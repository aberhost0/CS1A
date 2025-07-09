#include <iostream>
#include <string>
using namespace std;

void getDimensions(float& pi, float& radius);
bool isRadiusValid(float radius);
float calcArea(float pi, float radius);
void showArea(float area);

int main() {

    float pi;
    float radius;
    float area;
    bool isValid = false;
    int count = 1;

    while (isValid == false && count <= 3) {

        getDimensions(pi, radius);

        isValid = isRadiusValid(radius);

        if (isValid == false) {

            if (count == 3) {

                cout << "\nThird invalid attempt... Now closing program\n\n";
                exit(1);
            }
            cout << "\nInvalid radius...must be > 0 and < 11.\n"
                 << "Please re-enter dimensions.\n\n";
        }
        count++;

        
    }
    area = calcArea(pi, radius);
    
    showArea(area);

    return 0;
}

bool isRadiusValid(float radius) {

    if (radius > 0 && radius < 11) {

        return true;
    }
    else {

        return false;
    }
}

void getDimensions(float& pi, float& radius) {

    cout << "Enter pi: ";
    cin >> pi;
    cout << "Enter the radius: ";
    cin >> radius;
}

float calcArea(float pi, float radius) {
     
    float area;

    area = pi * radius * radius;

    return area;
}

void showArea(float area) {
    cout << "\nThe area of the circle is " << area << endl << endl;
} 

// --------------------------------------------------------------------------

/*
void getDimensions(float& pi, float& radius);
bool isRadiusValid(float radius);
float calcArea(float pi, float radius);
void showArea(float area);

    int main() {

    float pi;
    float radius;
    float area;
    bool isValid = false;

    getDimensions(pi, radius);      // Pass by reference

    isValid = isRadiusValid(radius);

    if (isValid == true) {
        
        area = calcArea(pi, radius);    // Pass by value
        showArea(area);                 // Pass by value
    }
    else {
        
        cout << "Invalid radius...must be > 0 and < 11.\n"
             << "Now closing the program...\n\n";
    }   exit(1);

    return 0;
}

bool isRadiusValid(float radius) {

    if (radius > 0 && radius < 11) {

        return true;
    }
    else {

        return false;
    }
}

void getDimensions(float& pi, float& radius) {

    cout << "Enter pi: ";
    cin >> pi;
    cout << "Enter the radius: ";
    cin >> radius;
}

float calcArea(float pi, float radius) {
     
    float area;

    area = pi * radius * radius;

    return area;
}

void showArea(float area) {
    cout << "\nThe area of the circle is " << area << endl << endl;
} */