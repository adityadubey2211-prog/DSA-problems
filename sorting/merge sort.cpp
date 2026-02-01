#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>& A , vector<int>& B, int n , int m){
    int index = m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(A[i]>=B[j]){
            A[index]=A[i];
            i--;
            index--;
        }
        else{
            A[index]=B[j];
            j--;
            index--;
        }
    }
    while(j>=0){
        A[index]=B[j];
        j--;
        index--;
    }
}

int main(){
    vector<int>A={1,2,3,0,0,0};
    int m = 3;
    vector<int>B = {4,5,6};
    int n = 3;
    sort(A,B,n,m);
    for(int x:A){
        cout<<x<<" ";
    }
}