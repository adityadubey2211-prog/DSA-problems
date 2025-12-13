#include <iostream>
#include <climits>
using namespace std;
int main(){
    int nums[5]={4,5,6,9,10};
    int size=5;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
        largest=nums[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}