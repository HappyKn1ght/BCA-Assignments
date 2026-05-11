// Q4. Write a C++ program to demonstrate the order of constructor and destructor in multiple inheritance.
#include <iostream>
using namespace std;

class Father
{
public:
    Father()
    {
        cout << "Constructor Order: " << endl;
        cout << "Father Constructor Called." << endl;
    }
    ~Father()
    {

        cout << "Father Destructor Called." << endl;
    }
};
class Mother
{
public:
    Mother()
    {
        cout << "Mother Constructor Called" << endl;
    }
    ~Mother()
    {
        cout << "Mother Destructor Called" << endl;
    }
};
class Child : public Father, public Mother
{
public:
    Child()
    {
        cout << "Child Constructor Called" << endl;
    }
    ~Child()
    {
        cout << "\nDestructor Order: " << endl;
        cout << "Child Destructor Called" << endl;
    }
};
int main()
{
    Child c1;
    return 0;
}
