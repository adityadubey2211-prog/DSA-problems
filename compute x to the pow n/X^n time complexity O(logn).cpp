//time complexity is O(logn)
#include <bits/stdc++.h>
using namespace std;
double my_pow(double x,int n){
    long binform=n;
    if(n<0){
        x=1/x;
        binform=-binform;
    }
    double ans=1;
    while(binform>0){
        if(binform%2==1){
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    return ans;
}
int main(){
    double x;
    cout<<"enter base = "<<endl;
    cin>>x;
    int n;
    cout<<"enter power = "<<endl;
    cin>>n;
    cout<<my_pow(x,n);
    return 0;
}
