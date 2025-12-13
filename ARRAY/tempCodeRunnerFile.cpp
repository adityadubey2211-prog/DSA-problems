# include <bits/stdc++.h>
using namespace std;
int uniquevofarr(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]!=arr[j]){ 
                return j;   
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={5,5,5,7,5};
    int size=5;
    cout<<uniquevofarr(arr,size)<<endl;
    return 0;
}