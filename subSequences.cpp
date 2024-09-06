#include <bits/stdc++.h>
using namespace std;

void subsequences(int arr[], int n, int i, vector<int> temp, vector<vector<int>> &ans)
{
    // base case
    if (i >= n)
    {
        ans.push_back(temp);
        return;
    }
    // excluding
    subsequences(arr, n, i + 1, temp, ans);
    // including
    temp.push_back(arr[i]);
    subsequences(arr, n, i + 1, temp, ans);
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    vector<vector<int>> ans;
    vector<int> temp;
    subsequences(arr, 4, 0, temp, ans);
    for (const auto &row : ans)
    {
        cout << "{";
        for (const auto &elem : row)
        {
            cout << elem;
        }

        cout << "}" << "," << " ";
    }
}