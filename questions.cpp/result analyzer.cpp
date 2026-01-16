#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>& percentage){
    for(int i = 0; i<percentage.size(); i++){
        for(int j = 0; j<percentage.size()-i-1; j++){
            if(percentage[j]<percentage[j+1]){
                swap(percentage[j],percentage[j+1]);
            }
        }
    }
}
void ranks(vector<int>& percentage){
    // sort(percentage.begin(), percentage.end());
    for(int i = 0; i<percentage.size(); i++){
        cout<<endl;
        if(percentage[i] >= 90){
            cout<<"TOPER";
        }
        else if(percentage[i] >=70 && percentage[i] < 90){
            cout<<"ABOVE AVERAGE";
        }
        else if(percentage[i] >= 50 && percentage[i] < 70){
            cout<<"AVERAGE";
        }
        else if(percentage[i] >= 35 && percentage[i] < 50){
            cout<<"BELOW AVERAGE";
        }
        else{
            cout<<"FAIL";
        }
    }
}
int main() {
    vector<int> percentage = {35, 40, 55, 65, 25, 75, 85, 90, 95};
    bubblesort(percentage);
    ranks(percentage);
    return 0;
}
