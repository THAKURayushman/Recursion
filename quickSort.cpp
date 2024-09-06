#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int i = s;
    int j = s;
    while (j <= e)
    {
        if (arr[j] <= arr[e])
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
    return i - 1;
}

void quicksort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    };
    int pivot = partition(arr, s, e);
    quicksort(arr, s, pivot - 1);
    quicksort(arr, pivot + 1, e);
}

int main()
{

    vector<int> arr = {5, 3, 2, 10, 8, 13};
    quicksort(arr, 0, arr.size() - 1);
    for (int num : arr)
    {
        cout << num << " ";
    }

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
