#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &vec)
{
    int len = vec.size();
    for (int i = 0, j = len - 1; i <= j; i++, j--)
    {
        swap(vec[i], vec[j]);
    }
    cout << "After reverse : " << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> vec = {2, 5, 8, 9, 1, 4, 6};
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    reverse(vec);
    return 0;
}