#include <iostream>
#include <climits>
using namespace std;
int main(){
    int nums[5]={4,5,6,9,10};
    int size=5;
    int largest=INT_MIN;
    int smallest=INT_MAX;
    int largest_index=-1;
    int smallest_index=-1;
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];
            largest_index=i;
        }
        if(nums[i]<smallest){
        smallest=nums[i];
        smallest_index=i;
        }
    }
    cout<<"Largest no -->"<<largest<<endl;
    cout<<"Largest no idex -->"<<largest_index<<endl;
    cout<<"Smallest no -->"<<smallest<<endl;
    cout<<"Smallest no index -->"<<smallest_index<<endl;
    return 0;
}