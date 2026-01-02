# include <bits/stdc++.h>
using namespace std;
bool isalphanum(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z') ) {
        return true;
    }
    return false;
}
bool isPalindrome(string s){
    int st = 0;
    int end = s.length() - 1;
    while(st < end){
        if(!isalphanum(s[st])){
            st++;
        }
        if(!isalphanum(s[end])){
            end--;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s = "lol";
    cout << isPalindrome(s);
    return 0;
}