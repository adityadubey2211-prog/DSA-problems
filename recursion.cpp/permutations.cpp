#include <bits/stdc++.h>
using namespace std;
void perms(vector<int>& nums, vector<vector<int>>& ans,int idx){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = idx; i<nums.size(); i++){
        swap(nums[idx], nums[i]);
        perms(nums, ans, idx+1);
        swap(nums[idx], nums[i]);
    }
}
void print(vector<vector<int>>& ans){
    for(auto permuts : ans){
        for(int x : permuts){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    perms(nums, ans, 0);
    print(ans);
}