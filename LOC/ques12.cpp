#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter array size : ";
    cin >> a;
    int arr[a];
    cout << "Enter elements of array : ";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int beg = 0, end = a-1;
    for (int i = 0; beg < end ; i++)
    {
        if (arr[beg] < 0)
        {
            if (arr[end] > 0)
            {
                int c = arr[end];
                arr[end] = arr[beg];
                arr[beg] = c;
                beg++;
                end--;
            }
            else
                end--;
        }
        else
            beg++;
    }

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
}