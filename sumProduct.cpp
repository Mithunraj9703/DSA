#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int length=sizeof(arr)/sizeof(int);
    int sum = 0, product = 1;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Total sum = " << sum << endl;
    cout << "Product = " << product;
    return 0;
}