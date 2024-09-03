#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e, int mid)
{
    vector<int> temp;
    int l = s;
    int r = mid + 1;
    while (l <= mid && r <= e)
    {
        if (arr[l] <= arr[r])
        {
            temp.push_back(arr[l]);
            l++;
        }
        else
        {
            temp.push_back(arr[r]);
            r++;
        }
    }
    while (l <= mid)
    {
        temp.push_back(arr[l]);
        l++;
    }
    while (r <= e)
    {
        temp.push_back(arr[r]);
        r++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[s + i] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e, mid);
}

int main()
{
    vector<int> nums = {5, 2, 3, 1};
    mergeSort(nums, 0, nums.size() - 1);
    for (const auto &i : nums)
    {
        cout << i << " ";
    }
}
