# include <bits/stdc++.h>
using namespace std;
int main (){
    int arr[]={1,2,1,1,5};
    int n=5;
    for(int i=0; i<n; i++){
        int flag=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                flag++;
            }
        }
        if(flag>n/2){
            cout<<arr[i]<<" ";
            break;
        }
    }
return 0;
}