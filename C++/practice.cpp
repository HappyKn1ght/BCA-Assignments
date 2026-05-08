#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    // largest
    if (a > b && a > c)
    {
        cout << " \nlargest number is " << a;
    }
    else if (b > c && b > a)
    {
        cout << " \nlargest number is " << b;
    }
    else
    {
        cout << " \nlargest number is " << c;
    }
    // smallest
    if (a < b && a < c)
    {
        cout << " \nsmallest number is " << a;
    }
    else if (b < c && b < a)
    {
        cout << " \nsmallest number is " << b;
    }
    else
    {
        cout << " \nsmallest number is " << c;
    }

    /*
    middle
    if ((a != b) && (a != c))
    {
        cout << "\nmiddle number is " << a;
    }
    else if ((b != c) && (b != a))
    {
        cout << "\nmiddle number is " << b;
    }
    else
    {
        cout << "\nmiddle number is " << c;
    }
    */

    return 0;
}
