# include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,4,2,2,2,2};
    int n=7;
    int flag=0,ans=0;
    for(int i=0; i<n; i++){
        if(flag==0){
            ans=arr[i];
        }
        else if(ans==arr[i]){
            flag++;
        }
        else{
            flag--;
        }
    }
    cout<< ans;
    return 0;
}
