# include <bits/stdc++.h>
using namespace std;
bool binarysearch(vector<vector<int>>& mat, int target){
    int n = mat.size();
    int m = mat[0].size();
    int r = 0, c =m-1;
    while(r<n && c>=0){
        if(mat[r][c] == target){
            return true;
        }
        else if(mat[r][c] > target){
            c--;
        }
        else{
            r++;
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
