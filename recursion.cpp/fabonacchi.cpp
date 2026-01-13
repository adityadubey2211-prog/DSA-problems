# include<bits/stdc++.h>
using namespace std;
int fabonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fabonacci(n-1) + fabonacci(n-2);
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fabonacci of " << n << " is: " << fabonacci(n) << endl;
    return 0;
}