#include <iostream>
using namespace std;
void changearr(int arr[],int size){
    for(int i=0;i<size;i++){
    arr[i]=2*arr[i];
    }
}
int main(){
    int arr[]={3,4,6};
    // int size=3;
    changearr(arr,3);
    for(int i=0;i<3;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
    //pass by refrence is nothing just using function in array for more info we have to study pointers
}