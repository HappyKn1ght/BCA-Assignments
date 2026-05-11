// Write a program to demonstrate default constructor and destructor.
#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Constructor Called." << endl;
    }
    ~Parent()
    {
        cout << "Destructor Called." << endl;
    }
};
int main()
{
    Parent p1;
    return 0;
}