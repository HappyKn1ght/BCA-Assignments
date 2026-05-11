// Q7. Write a C++ program using data members and member functions.
#include <iostream>
using namespace std;

class Student
{
private:
    // data member
    string name;
    int roll;
    int marks;

public:
    // member function for input
    void setter()
    {
        cout << "Enter Student Name   : ";
        cin >> name;
        cout << "Enter Student Roll No: ";
        cin >> roll;
        cout << "Enter Student Marks  : ";
        cin >> marks;
    }
    void getter()
    {
        cout << "\nStudent Details:-\n";
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks  : " << marks << endl;
    }
};

int main()
{
    Student s1;
    s1.setter();
    s1.getter();
    return 0;
}