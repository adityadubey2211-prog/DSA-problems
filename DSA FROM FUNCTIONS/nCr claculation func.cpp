#include <iostream>
using namespace std;
int facto(int n){
    int fact=1;
    for(int i=1; i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r){
    int fact_n=facto(n);
    int fact_r=facto(r);
    int fact_nmr=facto(n-r);
    return fact_n/(fact_r*fact_nmr);
}
int main(){
    int n=8,r=4;
   cout<< nCr(n,r)<<endl;
    return 0;
}