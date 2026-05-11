// program that demonstrates function overloading
#include <iostream>
using namespace std;

class sum
{
public:
    void add(int a)
    {
        cout<<"One Integer: " << a << endl;
    }
    void add(int a, int b)
    {
        cout<<"Two Integer: " << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout<<"Three Integer: " << a + b + c << endl;
    }
    void add(double a, double b)
    {
        cout<<"Two double: " << a + b << endl;
    }
};
int main()
{
    sum s1;
    s1.add(5,6);
}