#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter any number: ";
    cin >> n;
    for (int i = 1;; i++)
    {
        sum = pow(2, i);
        if (sum == n)
        {
            cout << n << " is power of 2." << endl;
            break;
        }
        if (sum > n)
        {
            cout << n << " is not power of 2.";
            break;
        }
    }
    return 0;
}