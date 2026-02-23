# include <bits/stdc++.h>
using namespace std;
void flip(int &a, int &b){
    int temp = a;
    a=b;
    b = temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"before fliping"<<" "<<a<<" "<<b<<endl;
    flip(a,b);
    cout<<"after fliping"<<" "<<a<<" "<<b<<endl;
    return 0;
}