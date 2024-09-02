#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int target, int s, int e)
{
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return true;
    }
    if (s > e)
    {
        return false;
    }
    if (arr[mid] > target)
    {
        return binarySearch(arr, target, s, mid - 1);
    }

    return binarySearch(arr, target, mid + 1, e);
}

int main()
{
    vector<int> arr = {3, 8, 11, 15, 20, 22};
    int target;
    cout << "Enter the element to be searched: ";
    cin >> target;
    cout << binarySearch(arr, target, 0, arr.size() - 1);
    return 0;
}