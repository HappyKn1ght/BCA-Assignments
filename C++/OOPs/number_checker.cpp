//. Write a program using relational and logical operators to check whether a number is positive, negative or zero.
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (n > 0 && n!=0)
    {
        cout << "Positive";
    }
    else if (n < 0 && n!=0)
    {
        cout << "Negative!";
    }
    else
    {
        cout << "Zero!";
    }

    return 0;
}
*/

#include <iostream>
using namespace std;

class Math
{
private:
    int n;

public:
    void setInput()
    {
        cout << "Enter N: ";
        cin >> n;
    }
    void checker()
    {
        if (n > 0 && n != 0)
        {
            cout << "Positive";
        }
        else if (n < 0 && n != 0)
        {
            cout << "Negative!";
        }
        else
        {
            cout << "Zero!";
        }
    }
};
int main()
{
    Math obj;
    obj.setInput();
    obj.checker();
    return 0;
}