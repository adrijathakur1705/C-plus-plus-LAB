```cpp
#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside function:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\nBefore function call:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swap(x, y);

    cout << "\nAfter function call:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
```

