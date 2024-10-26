#include <iostream>
using namespace std;
int main()
{
    int arr[] = {22, 45, 5, 67, 21, 89, 34, 25};
    int length = sizeof(arr) / sizeof(int);
    int maximum = INT32_MIN;
    int minimum = INT32_MAX;
    cout << "array :- " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }
    int i = 0, j = 0;
    for (; i < length; i++)
    {
        if (maximum == arr[i])
        {
            break;
        }
    }
    for (; j < length; j++)
    {
        if (minimum == arr[j])
        {
            break;
        }
    }
    swap(arr[i], arr[j]);
    cout << endl;
    cout << "array after swapping max and min :- " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}