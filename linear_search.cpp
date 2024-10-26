#include <iostream>
#include <vector>
using namespace std;
void search(vector<int> &vec, int num)
{
    for (int i : vec)
    {
        if ((i ^ num) == 0)
        {
            cout << num << " is present in vector.";
            return;
        }
    }
    cout << num << " is not present in vector.";
    return;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    search(vec, 6);
    return 0;
}