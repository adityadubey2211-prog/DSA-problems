# include <bits/stdc++.h>
using namespace std;
int main(){
    int max_sum=INT_MIN;
    int n=5;
    int arr[]={1,-2,-3,4,5};
    for(int st=0; st<n; st++){
        int current_sum=0;
        for(int end=st; end<n; end++){
            current_sum+=arr[end];
            max_sum=max(current_sum,max_sum);
        }
    }
    cout<<"max sum of an subarry ="<<max_sum<<endl;
    return 0;
}