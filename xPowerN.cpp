#include <iostream>
using namespace std;
int power(int b, int n)
{
    int ans = 1;
    if (n == 0)
        return 1;
    if (b == 0)
        return 0;
    if (b == 1)
        return 1;
    if (b == -1 && n % 2 == 0)
        return 1;
    if (b == -1 && n % 2 != 0)
        return -1;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans *= b;
        }
        b *= b;
        n = n / 2;
    }
    return ans;
}
int main()
{
    int n, b;
    cout << "enter base and power: ";
    cin >> b >> n;
    cout << power(b, n);
    return 0;
}