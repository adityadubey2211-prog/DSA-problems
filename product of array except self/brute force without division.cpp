#include <bits/stdc++.h>

using namespace std;

vector<int> productself(vector<int> &nums, int n)
{
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = 4;
    vector<int> result = productself(nums, n);
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}