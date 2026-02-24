# include <bits/stdc++.h>
using namespace std;
bool linearsearch(int matrix[3][3], int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main (){
    int matrix[3][3];
    cout<<"Enter elements of the matrix: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    if(linearsearch(matrix, target)){
        cout<<"Element found in the matrix."<<endl;
    }
    else{
        cout<<"Element not found in the matrix."<<endl;
    }
}