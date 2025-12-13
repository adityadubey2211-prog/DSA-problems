#include <bits/stdc++.h>
using namespace std;
int maxarea(vector<int> &height)
{
    int lp = 0, rp = height.size() - 1;
    int maxWater = 0;
    while (rp > lp)
    {
        int W = rp - lp;
        int ht = min(height[rp], height[lp]);
        int curr_Water = W * ht;
        maxWater = max(maxWater, curr_Water);
        if (height[rp] > height[lp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
    }
    return maxWater;
}
int main()
{
    vector<int> height = {1, 3, 4, 5, 6, 7, 5, 3, 2};
    int n = 9;
    int ans = maxarea(height);
    cout << ans;
    return 0;
}