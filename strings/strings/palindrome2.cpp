# include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a string: ";
    cin.getline(str, 100);
    int i = 0, j, flag = 1;
    j=0;
    while(str[j] != '\0'){
        j++;
    }
    j = j-1;
    while(i<j){
        if(str[i] != str[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag == 1){
        cout<<"The string is a palindrome."<<endl;
    }
    else{
        cout<<"The string is not a palindrome."<<endl;
    }
    return 0;
}