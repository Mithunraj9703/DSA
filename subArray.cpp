#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    int l = vec.size();
    for (int i = 0; i < l; i++)
    {
        for (int j = i; j < l; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << vec[k];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}