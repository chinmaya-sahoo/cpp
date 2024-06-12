#include <iostream>
using namespace std;
int main()
{
    float r, pi = 3.1415;
    cout << "enter the radius:" << endl;
    cin >> r;
    cout <<" radius is :" << r << endl;
    float d = (float)2 * r;
    float c = (float)2 * pi * r;
    float a = pi * r * r;
    cout << "diameter is :" << d << endl;
    cout << "circumference is :" << c << endl;
    cout << "area is :" << a << endl;
    return 0;
}