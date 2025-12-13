#include <iostream>
#include <climits>
using namespace std;
int main(){
     int nums[5]={4,5,6,9,10};
    int size=5;
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        largest=max(nums[i],largest);
        smallest=min(nums[i],smallest);
    }
    cout<<"SMALLEST="<<smallest<<endl;
    cout<<"LARGEST="<<largest<<endl;
    return 0;
}