#include <bits/stdc++.h>
using namespace std;

void subsequences(int arr[], int n, int i, vector<int> temp, int sum, vector<vector<int>> &ans, vector<int> &seqSum)
{
    // base case
    if (i == n)
    {
        ans.push_back(temp);
        seqSum.push_back(sum);
        return;
    }
    // excluding
    subsequences(arr, n, i + 1, temp, sum, ans, seqSum);
    // including
    temp.push_back(arr[i]);
    subsequences(arr, n, i + 1, temp, sum = sum + arr[i], ans, seqSum);
}

int main()
{
    int sum = 0;
    vector<int> seqSum;
    int arr[] = {1, 2, 3, 4};
    vector<vector<int>> ans;
    vector<int> temp;
    subsequences(arr, 4, 0, temp, sum, ans, seqSum);

    int i = 0;
    for (const auto &row : ans)
    {
        cout << "{";
        for (const auto &elem : row)
        {
            cout << elem;
        }

        cout << "}" << " " << "sum is - " << seqSum[i] << endl;
        i++;
    }

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
