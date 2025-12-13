# include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    for(int i:vec){//i is not index i is the value stored in that index
        cout<<i<<" ";
    }
}