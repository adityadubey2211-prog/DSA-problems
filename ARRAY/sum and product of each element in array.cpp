# include <bits/stdc++.h>
using namespace std;
long long sofarr(int arr[],int size){
    long long sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
long long pofarr(int arr[],int size){
    long long p=1;//always use longlong in product to avoid overflow
    for(int i=0;i<size;i++){
        p=p*arr[i];
    }
    return p;
}
int main(){
    int arr[]={1,6,5,3,6};
    int size=5;
    cout<< sofarr(arr,size)<<endl;
    cout<<pofarr(arr,size)<<endl;
}