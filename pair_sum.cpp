// finding pairs:-
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  int main(){
//      vector<int> vec={2,7,11,15};
//      int n=vec.size();
//      for(int i=0;i<n;i++){
//          for(int j=i+1;j<n;j++){
//              cout<<vec[i]<<vec[j]<<" ";
//          }
//          cout<<endl;
//      }
//      return 0;
//  }

// target hit by pairs brut force approach :- O(n^2)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={2,7,11,15};
//      int target=26;
//      int n=vec.size();
//      for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(target==vec[i]+vec[j]){
//                 cout<<i<<" "<<j;
//             }
//         }
//     }
//     return 0;
// }

// target hit by sorted array approach :- O(n)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 26;
    int n = vec.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int ps = vec[i] + vec[j];
        if (ps == target)
        {
            cout << i << " " << j;
            break;
        }
        else if (ps < target)
        {
            i++;
        }
        else if (ps > target)
        {
            j--;
        }
    }
    return 0;
}