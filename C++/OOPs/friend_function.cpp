// Q1. Write a C++ program to demonstrate the concept of friend function using suitable example.
#include <iostream>
using namespace std;
class Student
{
private:
    int marks = 80; // private data

    friend void showMarks(Student s);
};
// friend function definition
void showMarks(Student s)
{
    cout << "Student Marks = " << s.marks;
}
int main()
{
    Student s1;    // example student
    showMarks(s1); // friend function call
    return 0;
}