#include <iostream>
using namespace std;
int main()
{
    int price[] = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0;
    int length = sizeof(price) / sizeof(price[0]);
    int bestBuy = price[0];
    for (int i = 1; i < length; i++)
    {
        if (price[i] > bestBuy)
        {
            maxProfit = max(maxProfit, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }
    cout << "Maximum profit is " << maxProfit;
    return 0;
}