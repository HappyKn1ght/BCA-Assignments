// Q12.Write a C++ program to find the maximum of given three numbers using class, object and inline function
#include <iostream>
using namespace std;

class Number
{
public:
    // inline function
    inline int findMax(int a, int b, int c)
    {
        if (a >= b && a >= c)
        {
            return a;
        }
        else if (b >= a && b >= c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
};
int main()
{
    Number obj;
    int a, b, c;
    cout << "Enter Three numbers: " << endl;
    cin >> a >> b >> c;
    // int max = obj.findMax(a,b,c);
    cout << "Max: " << obj.findMax(a, b, c);
    return 0;
}