#include <iostream>
#include <vector>
using namespace std;
vector<int> removeDuplicate(vector<int> &arr)
{
    vector<int> res;

    for (int i = 0; i < arr.size(); i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // Include this element if not included previously
        if (i == j)
            res.push_back(arr[i]);
    }
    return res;
}
// Driver Code
int main()
{
    vector<int> arr = {1, 2, 3, 1, 4, 2};
    vector<int> res = removeDuplicate(arr);

    for (int ele : res)
        cout << ele << " ";
    return 0;
}