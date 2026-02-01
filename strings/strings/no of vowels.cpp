# include<bits/stdc++.h>
using namespace std;
int main(){
    char str[101];
    cin.getline(str, 101);
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U'){
             count ++ ;  
        }
    }
    cout<<count;
}