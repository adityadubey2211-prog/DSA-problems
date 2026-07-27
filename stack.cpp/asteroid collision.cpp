#include <bits/stdc++.h>
using namespace std;
void asteroid(vector<int> arr){
    int n = arr.size();
    vector<int> ans;
    stack<int> st;
    for(int i = 0; i<n; i++){
        if(arr[i] > 0){
            st.push(arr[i]);
        }
        else{
            while(!st.empty() && st.top() > 0 && arr[i] < 0 && st.top() < abs(arr[i])){
                st.pop();
            }
            if(!st.empty() && st.top() > 0 && arr[i] < 0 && st.top() > abs(arr[i])){
                continue;
            }
            if(!st.empty() && st.top() > 0 && arr[i] < 0){
                st.pop();
                continue;
            }
            else{
                st.push(arr[i]);
            }
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<int> arr = {5,10,-5};
    asteroid(arr);
    return 0;
}