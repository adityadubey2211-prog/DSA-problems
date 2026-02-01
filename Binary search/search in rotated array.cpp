# include <bits/stdc++.h>
using namespace std;
int searchInRotatedArr(vector<int>& A , int tar){
    int st=0;
    int end = A.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(A[mid]==tar){
            return mid;
        }
        if(A[st]<=A[mid]){// left side searching
            if(A[st]<=tar && tar<=A[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{// right side searching
            if(A[mid]<=tar && tar<=A[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>A={3,4,5,6,7,0,1,2};
    int tar = 0;
    cout<<searchInRotatedArr(A,tar);
    return 0;
}