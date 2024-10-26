#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    int a=n-1;
    int c;
    c = a & n;
    if (c == 0)
    {
        cout << n << " is power of 2.";
    }
    else
    {
        cout << n << " is not power of 2.";
    }
    return 0;
}