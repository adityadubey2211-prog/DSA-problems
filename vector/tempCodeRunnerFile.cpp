# include <iostream>
# include <vector>
using namespace std;
int twosum(vector<int>vec,int target){
    int sum=0;
    for(int i:vec){
        sum+=i;
        if(sum==target){
            return vec.at(i);
        }
    }
    return -1;
}
int main(){
    vector<int>vec={1,2,3,4,5};
    int target=77;
    cout<<twosum(vec,target)<<endl;
    return 0;
}