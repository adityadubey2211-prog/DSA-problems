# include <bits/stdc++.h>
using namespace std;
int max_sum(int matrix[3][3]){
    int sum = INT_MIN;
    for(int i = 0; i<3; i++){
        int curr_sum = 0;
        for(int j = 0; j<3; j++){
            curr_sum+=matrix[i][j];
        }
        sum = max(sum,curr_sum);
    }
    return sum;
}
int main (){
    int matrix[3][3];
    cout<<"Enter elements of the matrix: ";
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"sum is:"<<" "<<max_sum(matrix)<<endl;
}