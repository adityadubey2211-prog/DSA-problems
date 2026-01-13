# include<bits/stdc++.h>
using namespace std;
int binary(vector<int>& arr, int tar, int st, int end){
    if(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        if(arr[mid]>tar){
            return binary(arr, tar, st, mid-1);
        }
        if(arr[mid]<tar){
            return binary(arr, tar, mid+1, end);
        }
    }
    return -1;
}
int search(vector<int>& arr, int tar){
    return binary(arr, tar, 0, arr.size()-1);
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << search(arr, 3) << endl;
    return 0; 
}