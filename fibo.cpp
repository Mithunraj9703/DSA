#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter nth position of fibonacii series: ";
    cin >> n;
    int a = 0, b = 1, c = 0;
    for (int i = 0; i <= n; i++)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}