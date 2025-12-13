#include <iostream>
#include<climits>//--this header is included when we use identifires like int_max and int_min
using namespace std;
int main(){
    int nums[5]={3,4,5,6,7};
    int size=5;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
       if(nums[i]<smallest){
       smallest=nums[i];
       }
       
    }
    cout<<smallest;
    return 0;
}