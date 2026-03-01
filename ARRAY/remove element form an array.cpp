# include <bits/stdc++.h>
using namespace std;
int remove(vector<int>& nums, int val){
    int n = nums.size();
    int k = 0;
    for(int i = 0; i<n; i++){
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }
     return k;
}
int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int k = remove(nums,val);
    for(int i = 0; i<k; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}