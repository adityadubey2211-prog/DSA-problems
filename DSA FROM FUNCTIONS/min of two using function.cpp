#include <iostream>
using namespace std;
int minoftwo(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }

    
}
int main(){
    cout<<"min="<<minoftwo(10,5)<<endl;
    
    return 0; 
}
