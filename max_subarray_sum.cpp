// Brute force approach:- O(n^2)
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
//     int l = vec.size();
//     int maxSum = INT32_MIN;
//     for (int i = 0; i < l; i++)
//     {
//         int currSum = 0;
//         for (int j = i; j < l; j++)
//         {
//             currSum += vec[j];
//             maxSum = max(currSum, maxSum);
//         }
//     }
//     cout << "Maximum sum of subArray is " << maxSum;
//     return 0;
// }

// kadane algorithum:- O(n)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    int currSum = 0, maxSum = INT32_MIN;
    for (int val : vec)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Maximum sum of subArray is " << maxSum;
    return 0;
}