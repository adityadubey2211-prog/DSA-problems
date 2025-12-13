# include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,7,5,4,3,10};
    int  n=6, target=9;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if (arr[i]+arr[j]==target){
                cout<<i<<","<<j<<endl;
            }
        }
    }
    return 0;
}