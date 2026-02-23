# include <bits/stdc++.h>
using namespace std;
int main (){
    int row,cols;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>cols;
    int matrix1[row][cols], matrix2[row][cols], result[row][cols];
    cout<<"Enter elements of first matrix: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter elements of second matrix: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=0;
            for(int k=0;k<cols;k++){
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}