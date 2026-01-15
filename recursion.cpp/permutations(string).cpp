# include<bits/stdc++.h>
using namespace std;
void perms(string s, int idx){
    if(idx == s.length()){
        cout<<s<<endl;
        return;
    }
    for(int i = idx; i<s.length(); i++){
        swap(s[idx], s[i]);
        perms(s, idx+1);
        swap(s[idx], s[i]);
    }
}
int main(){
    string s = "abc";
    perms(s, 0);
    return 0;
}