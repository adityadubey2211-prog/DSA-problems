# include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,3,2,4,1};
    int n=5;
    bubblesort(arr, n);
    printArr(arr, n);
    return 0;
}