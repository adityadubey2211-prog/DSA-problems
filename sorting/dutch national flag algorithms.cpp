# include <bits/stdc++.h>
using namespace std;
void DNF(int arr[], int n){
    int low = 0;
    int hg = n-1;
    int mid = 0;
    while(mid<=hg){
        if (arr[mid]==0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[hg]);
            hg--;
        }
    }
}
int printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 0,2,0};
    int n = 10;
    DNF(arr,n);
    printArr(arr,n);
    return 0;
}