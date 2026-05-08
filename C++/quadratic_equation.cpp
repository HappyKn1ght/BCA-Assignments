#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d, root1, root2;
    cout << "enter the multipal of x2: ";
    cin >> a;
    cout << "enter the multipal of x: ";
    cin >> b;
    cout << "enter the value of constant: ";
    cin >> c;
    
    d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        cout << "root1 = " << root1;
        cout << "\nroot2 = " << root2;
    }
    return 0;
}