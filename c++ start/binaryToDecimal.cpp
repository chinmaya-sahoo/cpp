#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int mult = 1,num = 0,ld;
    while (n > 0)
    {
        ld = n % 10;
        num = num + ld * mult;
        n = n/10;
        mult = mult*2;
    }

    cout<<"Converted to decimal : "<< num ;
}