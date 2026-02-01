# include <bits/stdc++.h>
using namespace std; 
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    int i, len = 0;
    while(str[len] != '\0'){
        len++;
    }
    for(i = len-1; i>=0; i--){
        cout<<str[i]<<" ";
    }
    return 0;
}