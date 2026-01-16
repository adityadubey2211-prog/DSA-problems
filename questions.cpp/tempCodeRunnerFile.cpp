# include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>& percentage){
    for (int i =0; i<percentage.size(); i++){
        for (int j =0; j<percentage.size()-i-1; j++){
            if(percentage[j]<percentage[j+1]){
                swap(percentage[j], percentage[j+1]);
            }
        }
    }
}
bool binary_search(vector<int>& percentage, int target, int st, int end){
    if(st>end){
        return false;
    }
    if(st<=end){
        int mid = st + (end - st)/2;
        if(percentage[mid] == target){
            return true;
        }
        else if(percentage[mid] > target){
            return binary_search(percentage, target, mid+1, end);
        }
        else{
            return binary_search(percentage, target, st, mid-1);
        }
    }
    return false;
}
int main(){
    vector<int> percentage = {35, 40, 55, 65, 25, 75, 85, 90, 95};
    bubblesort(percentage);
    int target;
    cout<<"Enter the percentage to search: ";
    cin>>target;
    if(binary_search(percentage, target, 0, percentage.size()-1)){
        cout<<"Percentage found in the record."<<endl;
    }
    else{
        cout<<"Percentage not found in the record."<<endl;
    }
    return 0;
}