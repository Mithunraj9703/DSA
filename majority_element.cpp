// brute force approach:- O(n^2)
// #include <iostream>
// #include <vector>
// using namespace std;
// int majorityElement(vector<int> vec)
// {
//     int n = vec.size();
//     for (int val : vec)
//     {
//         int feq = 0;
//         for (int el : vec)
//         {
//             if (val == el)
//             {
//                 feq++;
//             }
//         }
//         if (feq > n / 2)
//         {
//             return val;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> vec = {1, 2, 2, 1, 1};
//     cout << "Majority element is " << majorityElement(vec);
//     return 0;
// }

// Optimize approach:- O(logn+n)=O(nlogn)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     // sorting vector:-
//     sort(nums.begin(),nums.end());
//     int ans=nums[0];
//     int freq=1;
//     for(int i=1;i<n;i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//             if(freq>n/2){
//                 return ans;
//             }
//         }else{
//             ans=nums[i];
//             freq=1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> vec = {1, 2, 2, 1, 1};
//     cout << "Majority element is " << majorityElement(vec);
//     return 0;
// }

// Moore's voting algorithum:- O(n)
#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int freq = 0, ans = 0;
    for (int el : nums)
    {
        if (freq == 0)
        {
            ans = el;
        }
        if (ans == el)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {1, 2, 2, 1, 1};
    cout << "Majority element is " << majorityElement(vec);
    return 0;
}