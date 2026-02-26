# include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>& mat, int row, int target){
    int st = 0;
    int end = mat[0].size() - 1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(mat[row][mid] == target){
            return true;
        }
        else if(mat[row][mid] > target){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return false;
}

bool binarysearch(vector<vector<int>>& mat, int target){
    int m = mat.size();
    int n = mat[0].size();
    int stRow = 0;
    int endRow = m-1;
    while(stRow <= endRow){
        int midRow = stRow + (endRow - stRow)/2;
        if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
            return search(mat, midRow, target);
        }
        else if(target < mat[midRow][0]){
            endRow = midRow - 1;
        }
        else{
            stRow = midRow + 1;
        }
    } 
    return false;  
}
int main (){
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 7;
    if(binarysearch(mat, target)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
}