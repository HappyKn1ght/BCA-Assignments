// Q8. Write a C++ program to find the area of a rectangle using constructor
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    // constructor
    Rectangle(float length, float breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    void showArea()
    {
        float formula = length * breadth;
        cout << "Area of Rectangle: " << formula << endl;
    }
};
int main()
{
    Rectangle obj1(2, 3);
    obj1.showArea();
    return 0;
}