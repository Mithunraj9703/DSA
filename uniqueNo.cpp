#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 4, 3, 2, 5, 6, 3, 7, 2};
    int length = sizeof(arr) / sizeof(int);
    cout << "unique no. in array are:- " << endl;
    for (int i = 0; i < length; i++)
    {
        int k = 0;
        for (int j = 0; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                k++;
            }
        }
        if (k == 1)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}