#include <bits/stdc++.h>
using namespace std;

void combination(vector<int> arr, int i, int target, vector<vector<int>> &ans, vector<int> current)
{
    int n = arr.size();

    if (i == n)
    {
        if (target == 0)
        {
            ans.push_back(current);
        }
        return;
    }

    if (arr[i] <= target)
    {
        // adding element to the array current
        current.push_back(arr[i]);
        combination(arr, i, target - arr[i], ans, current);

        // backtracking
        current.pop_back();
    }

    // not adding the element to the current array;
    combination(arr, i + 1, target, ans, current);
}

int main()
{
    vector<int> arr = {11, 12, 13, 14, 15};
    int target = 10;
    vector<vector<int>> ans;
    combination(arr, 0, target, ans, {});
    for (const auto &i : ans)
    {
        cout << "{";
        for (const auto &j : i)
        {
            cout << j << " ";
        }
        cout << "}" << endl;
    }

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
