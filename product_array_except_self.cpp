#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(n, 1);
    // brute force approach
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i != j)
    //         {
    //             ans[i] *= nums[j];
    //         }
    //     }
    // }

    // optimum approach O(n),O(n)
    // vector<int> prefix(n, 1);
    // vector<int> suffix(n, 1);
    // for (int i = 1; i < n; i++)
    // {
    //     prefix[i] = prefix[i - 1] * nums[i - 1];
    // }
    // for (int j = n - 2; j >= 0; j--)
    // {
    //     suffix[j] = suffix[j + 1] * nums[j + 1];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     ans[i] = prefix[i] * suffix[i];
    // }

    // More optimum approach O(n),O(1)
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix = suffix * nums[i + 1];
        ans[i] *= suffix;
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}