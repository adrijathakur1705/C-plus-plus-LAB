#include <iostream>
using namespace std;

class Shape
{
private:
    float radius;
    float length;
    float width;

public:

    
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;

        cout << "Constructor called." << endl;
    }

    
    float circlePerimeter()
    {
        return 2 * 3.14159 * radius;
    }

    
    float rectanglePerimeter()
    {
        return 2 * (length + width);
    }

    
    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float r, l, w;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length of rectangle: ";
    cin >> l;

    cout << "Enter width of rectangle: ";
    cin >> w;

    Shape obj(r, l, w);

    cout << "\nPerimeter of Circle = "
         << obj.circlePerimeter() << endl;

    cout << "Perimeter of Rectangle = "
         << obj.rectanglePerimeter() << endl;

    return 0;
}
