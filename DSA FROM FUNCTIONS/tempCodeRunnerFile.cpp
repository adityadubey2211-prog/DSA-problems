#include <iostream>
using namespace std;
int primeyn(int num){
    if(num==1){
        cout<<"no is nither prime nor composite";
    }else if(num==2){
        cout<<"only even prime number";
    }else if(num%2==0){
        cout<<"no is not a prime because it is divisible by 2";
    }else{
        cout<<"enter no is prime";
    }
}
int main(){
    cout<<primeyn(3)<<endl;
    return 0;
}