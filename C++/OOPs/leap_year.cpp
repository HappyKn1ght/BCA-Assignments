// program to check leap year using class and object
#include <iostream>
using namespace std;

class LeapYear
{
public:
    void checkLeapYear(int year)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << " is a Leap Year.";
        }
        else
        {
            cout << year << " is not a Leap Year.";
        }
    }
};
int main()
{
    LeapYear obj;
    int year;
    cout << "Enter Year: ";
    cin >> year;
    obj.checkLeapYear(year);
    return 0;
}
