#include <iostream>
using namespace std;
int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);
    int width, maxWater = 0;
    // brute force approach
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         maxWater = max(maxWater, (j - i) * min(height[i], height[j]));
    //     }
    // }
    // cout << "Maximum water in container " << maxWater << " lt";

    // optimum approach
    int i = 0, j = n - 1;
    while (i < j)
    {
        maxWater = max(maxWater, (j - i) * min(height[i], height[j]));
        height[i] < height[j] ? i++ : j--;
    }
    cout << "Maximum water in container " << maxWater << " lt";
    return 0;
}