# include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int sRow = 0, sCol = 0, eRow = m-1, eCol = n-1;
    while(sRow <= eRow && sCol <= eCol){
        for (int i =sCol; i<=eCol; i++){
            ans.push_back(matrix[sRow][i]);
        }
        for(int j = sRow+1; j<=eRow; j++){
            ans.push_back(matrix[j][eCol]);
        }
        for(int k =eCol-1; k<=sCol; k--){
            if(sRow == eRow){
                break;
            }
            ans.push_back(matrix[eRow][k]);
        }
        for(int l = eRow-1; l>=sRow+1; l--){
            if (sCol == eCol){
                break;
            }
            ans.push_back(matrix[l][sCol]);
        }
        sRow++;
        sCol++;
        eRow--;
        eCol--;
    }
    return ans;
}
int main (){
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = spiralOrder(matrix);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}