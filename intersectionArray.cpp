#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 3, 5, 6, 7, 4, 9};
    int arr2[] = {1, 2, 4, 3, 10};
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);
    cout << "Intersection elemens of arrays:- " << endl;
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}