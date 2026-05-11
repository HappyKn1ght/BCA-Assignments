// Q13. Write a C++ program to demonstrate the concept of class and object
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    void display()
    {
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks  : " << marks << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Yashwant";
    s1.roll = 47;
    s1.marks = 463;
    s1.display();
    return 0;
}
