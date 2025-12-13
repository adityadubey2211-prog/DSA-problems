# include <bits/stdc++.h>
using namespace std;
int main(){
    int currentSum=0,maxSum=INT_MIN, arr[]={1,-2,3,-4,5},n=5;
    for(int i=0; i<n; i++){
        currentSum+=arr[i];
        maxSum=max(currentSum,maxSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
      cout<<"max sum ="<<maxSum<<endl;//Time complexity=0(n)//
    return 0;
}