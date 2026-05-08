#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    //system("cls");
    cout << "Enter the first number (a): ";
    cin >> a;

    cout << "Enter the second number (b): ";
    cin >> b;

    cout << "Enter the third number (c): ";
    cin >> c;

    cout << "\na = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c << "\n";

    if (a >= b && a >= c) {
        cout << "a is the biggest number.";
    }
    else if (b >= a && b >= c) {
        cout << "b is the biggest number.";
    }
    else {
        cout << "c is the biggest number.";
    }

    return 0;
}
