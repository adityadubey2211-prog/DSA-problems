# include <bits/stdc++.h>
using namespace std;
vector<int>pairSum(vector<int>nums,int target,int n){
    vector<int>ans;
    int i=0,j=n-1;
    while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int>nums{1,2,4,5,7,4,4,3,5};
    int target=9;
    int n=9;
    vector<int>ans = pairSum(nums,target,n);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}