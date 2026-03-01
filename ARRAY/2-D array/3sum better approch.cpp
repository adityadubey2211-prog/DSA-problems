# include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums){
    int n = nums.size();
    set<vector<int>> Tripset;
    for(int i = 0; i<n; i++){
        int tar = -nums[i];
        set<int> s;
        for(int j = i+1; j<n; j++){
            int third = tar - nums[j];
            if(s.find(tar - nums[j]) != s.end()){
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                Tripset.insert(temp);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(Tripset.begin(), Tripset.end());
    return ans;
}
int main (){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}