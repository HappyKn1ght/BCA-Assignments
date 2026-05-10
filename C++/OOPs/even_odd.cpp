// program to check if entered number is even or odd using class and object.
#include <iostream>
using namespace std;

class EvenOdd
{
public:
    void EvenOddChecker(int num)
    {
        if (num % 2 == 0)
        {
            cout << num << " is Even Number.";
        }
        else
        {
            cout << num << " is Odd Number.";
        }
    }
};
int main()
{
    EvenOdd obj;
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    obj.EvenOddChecker(num);
    return 0;
}