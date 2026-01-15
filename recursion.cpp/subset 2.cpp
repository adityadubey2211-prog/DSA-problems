# include <bits/stdc++.h>
using namespace std;
void getAllsubset(vector<int>& nums, vector<vector<int>>& allsubset, int i, vector<int>& ans){
    if(i == nums.size()){
        allsubset.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    getAllsubset(nums, allsubset, i + 1, ans);
    ans.pop_back();
    int idx = i+1;
    while(idx < nums.size() && nums[idx] == nums[idx-1]){
        idx++;
    }
    getAllsubset(nums, allsubset, idx, ans);
}
void print(vector<vector<int>>& allsubset){
    for(vector<int> subset : allsubset){
        for(int x : subset){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int> nums = {2,2,1};
    vector<vector<int>> allsubset;
    vector<int> ans;
    sort(nums.begin(), nums.end());
    getAllsubset(nums, allsubset, 0, ans);
    print(allsubset);
    return 0;
}