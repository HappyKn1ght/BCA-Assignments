// Q11. Write a C++ program to show the concept of copy constructor using suitable example.
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;

public:
    // constructor
    Student(string name, int rollno)
    {
        this->name = name;
        this->rollno = rollno;
    }
    // copy constructor
    Student(Student &s)
    {
       
        this->name = s.name;
        this->rollno = s.rollno;
    }
    void getInfo()
    {
        cout << "Name   : " << name << endl;
        cout << "Roll NO: " << rollno << endl;
    }
};
int main()
{
    Student s1("Yash", 47);
    Student s2(s1);
    cout<<"Original"<<endl;
    s1.getInfo();
    cout<<"copied"<<endl;
    s2.getInfo();
    return 0;
}
