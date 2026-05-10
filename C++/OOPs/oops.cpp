#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties/ attributes
    string name;
    string dept;
    string subject;

    // User Input
    void input()
    {
        cout << "Name: " << name;
        cin >> name;
        cout << "dept: " << dept;
        cin >> dept;
        cout << "subject: " << subject;
        cin >> subject;
    }
    // methods/ memeber function
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // setter
    void setSalary(double s)
    {
        salary = s;
    }
    // getter
    double getSalary()
    {
        return salary;
    }
    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "dept: " << dept << endl;
        cout << "Subject: " << subject << endl;
    }
};
int main()

{
    Teacher t1;
    // t1.name = "Happy";
    // t1.dept = "BCA";
    // t1.subject = "C++";
    t1.setSalary(25000);

    t1.input();
    t1.getInfo();
    cout << "salary: " << t1.getSalary() << endl;
    return 0;
}