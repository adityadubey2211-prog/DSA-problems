# include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int smallindex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[smallindex]){
                smallindex = j;
            }
            swap(arr[i], arr[smallindex]);
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
    int n = 5;
    selectionsort(arr, n);
    printArr(arr, n);
    return 0;
}