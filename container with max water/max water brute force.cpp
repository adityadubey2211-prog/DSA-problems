#include <bits/stdc++.h>
using namespace std;
int maxarea(vector<int> &height)
{
    int maxWater = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int W = j - i;
            int ht = min(height[i], height[j]);
            int curr_water = W * ht;
            maxWater = max(maxWater, curr_water);
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