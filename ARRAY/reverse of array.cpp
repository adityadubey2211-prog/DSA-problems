#include <bits/stdc++.h>
using namespace std;
void reverseofarr(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,3,2,4,5};
    int size=5;
    reverseofarr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}//two ponter approch