#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> &arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2; // no overflow occur
        if (arr[mid] < tar)
        {
            st = mid + 1;
        }
        else if (arr[mid] > tar)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;
    cout << binarysearch(arr1, 12);
}
