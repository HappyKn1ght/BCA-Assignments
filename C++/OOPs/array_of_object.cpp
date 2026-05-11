// Q3. Write a C++ program to enter student name, roll number and total marks and display them using array of objects.
#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;    // number of students
    cout<<"Number of Students:\n";
    cin>>n; 
    Student s[n]; // array of objects
    // Input data
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Roll No: ";
        cin >> s[i].roll;
        cout << "Marks: ";
        cin >> s[i].marks;
    }
    // Display data
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Roll No: " << s[i].roll << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
    return 0;
}