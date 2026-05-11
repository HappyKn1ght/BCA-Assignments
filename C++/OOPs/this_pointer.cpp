// Q14. Write a C++ program to show the use of  this  pointer.
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;

public:
    Student(string name, int rollno)
    {
        this->name = name;
        this->rollno = rollno;
    }
    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Rollno: " << rollno << endl;
    }
};
int main()
{
    Student s1("Yash", 47);
    s1.display();
    return 0;
}
