#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ans; 
    int arr[] = {1, 2, 3, 4}, n = 4, product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i]; 
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(product / arr[i]); 
        cout << ans[i] << ",";           
    }
}