# include <bits/stdc++.h>
using namespace std;
vector<int> product(vector<int>& nums,int n){
    vector<int>prefix(n,1);
    vector<int>sufix(n,1);
    vector<int>ans(n,1);
    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    for(int i=n-2; i>=0; i--){
        sufix[i]=sufix[i+1]*nums[i+1];
    }
    for(int i=0; i<n; i++){
        ans[i]=sufix[i]*prefix[i];
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4};
    int n =4;
    vector<int>result=product(nums,n);
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}