#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char op;

operation:

    cout << " || Calculator ||\n\n";

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nchoose the operation(+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "Invalid Operation, Try again\n";
        goto operation;
    }

    cout << "\nresult: " << result << endl;

    return 0;
}