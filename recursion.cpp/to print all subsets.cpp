# include<bits/stdc++.h>
using namespace std;
void printsubset(vector<int>& arr, int i, vector<int>& ans){
    if(i == arr.size()){
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    //include
    ans.push_back(arr[i]);
    printsubset(arr, i+1, ans);

    //exclude
    ans.pop_back();
    printsubset(arr, i+1, ans);
}
int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;
    printsubset(arr, 0, ans);
    return 0;
}