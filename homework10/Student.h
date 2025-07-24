#include <iostream>
#include <string>
using namespace std;

class Student 
{
private: 
    int idNum;
    string studentName;

public: 
    Student();
    Student(int idNum, string studentName);
    ~Student();
    void setID(int idNum, string studentName);
    void setName(string studentName);
    int getID();
    string getName();
    void displayStudent();
}; 
