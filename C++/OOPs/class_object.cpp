// program to demonstrate class and object.
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;

public:
    void getInfo()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll No      : ";
        cin >> rollno;
    }
    void displayInfo()
    {
        cout << "\nStudent Details:-" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Roll No     : " << rollno << endl;
    }
};
int main()
{
    Student s1;
    s1.getInfo();
    s1.displayInfo();
    return 0;
}