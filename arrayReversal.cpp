#include <bits/stdc++.h>
using namespace std;

void reverse(int l, int r, vector<int> &arr)
{
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    reverse(l + 1, r - 1, arr);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    cout << "original array :" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    reverse(0, n - 1, arr);
    cout << "reversed array :" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
}
