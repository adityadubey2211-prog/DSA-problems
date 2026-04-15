#include <bits/stdc++.h>
using namespace std;
void fizzBuzz(int n) {
    int i = 1;
    while(i<=n){
        if(i%3 == 0){
            cout<<"Fizz"<<endl;
        }
        else if(i%5 == 0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
        i++;
    }
}

int main(){
    int n = 15;
    fizzBuzz(n);
    return 0;
}
