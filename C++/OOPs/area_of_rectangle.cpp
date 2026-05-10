// program to find area of rectangle using class and object
#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area(float length, float breadth)    
    {
        float result = length * breadth;
        cout << "Area Of Rectangle = " << result;
    }
};
int main()
{
    Rectangle obj;
    float length, breadth;
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;
    obj.area(length, breadth);
    return 0;
}