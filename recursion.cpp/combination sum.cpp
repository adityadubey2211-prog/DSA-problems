# include <bits/stdc++.h>
using namespace std;
set<vector<int>> s;
void helper(vector<int>& arr, int tar, vector<int>& combi, vector<vector<int>>& ans, int idx){
    if(idx == arr.size() || tar < 0){
        return;
    }
    if(tar == 0){
        if(s.find(combi) == s.end()){
            s.insert(combi);
            ans.push_back(combi);
        }
    }
    combi.push_back(arr[idx]);
    helper(arr, tar-arr[idx], combi, ans, idx);
    helper(arr, tar, combi, ans, idx+1);
    combi.pop_back();
    helper(arr, tar, combi, ans, idx+1);
}
vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
    vector<vector<int>> ans;
    vector<int> combi;
    helper(arr, tar, combi, ans, 0);
    return ans;
}
int main(){
    vector<int> arr = {2, 3, 6, 7};
    int tar = 7;
    vector<vector<int>> ans = combinationSum(arr, tar);
    for(auto i: ans){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}