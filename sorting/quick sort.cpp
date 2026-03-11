# include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int st, int end){
    int pivot = arr[end];
    int i = st - 1;
    for(int j = st; j<=end - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i ++;
    swap(arr[i], arr[end]);
    return i;
}
void quicksort(int arr[], int st, int end){
    if (st < end){
        int pi = partition(arr, st, end);
        quicksort(arr, st, pi-1); //left half
        quicksort(arr, pi+1, end); //righthalf

    }
}
int main(){
    int arr[] = {5,3,2,4,1};
    int n = 5;
    quicksort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}