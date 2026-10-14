#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
   
    float AREA(float r)
    {
        return 3.14159 * r * r;
    }

    
    float AREA(float l, float w)
    {
        return l * w;
    }

    
    float AREA(float a, float b, float c)
    {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main()
{
    Shape s;
    float r, l, w, a, b, c;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    cout << "\nArea of Circle = " << s.AREA(r);
    cout << "\nArea of Rectangle = " << s.AREA(l, w);
    cout << "\nArea of Triangle = " << s.AREA(a, b, c);

    return 0;
}
