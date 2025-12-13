#include <iostream>
using namespace std;
int sumofdigit(int num){
    int digitsum=0;
    while(num>0){
    int lastdigit=num%10;
    num/=10;
    digitsum+=lastdigit;
    }
    return digitsum;
}
int main(){
    cout<<sumofdigit(321)<<endl;
    cout<<sumofdigit(426)<<endl;
}