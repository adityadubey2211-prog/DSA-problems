#include <bits/stdc++.h>
using namespace std;
int singleElement(vector<int> &A)
{
    int st = 0;
    int end = A.size() - 1;
    int n = A.size();
    while (st < end)
    {
        int mid = st + (end - st) / 2;
        if (mid == 0 && A[0] != A[1])
        {
            return mid;
        }
        if (mid == n - 1 && A[n - 1] != A[n - 2])
        {
            return mid;
        }
        if (A[mid - 1] != A[mid] && A[mid + 1] != A[mid])
        {
            return mid;
        }
        if (mid % 2 == 0)
        {
            if (A[mid + 1] == A[mid])
            {
                st = mid + 2;
            }
            else
            {
                end = mid - 1;
            }
        }
        else
        {
            if (A[mid - 1] == A[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}
int main()
{
    vector<int> Aa = {1, 1, 2, 2, 3, 4, 4};
    cout << singleElement(Aa);
}