# include <bits/stdc++.h>
using namespace std;
string reverseString(string s) {
    int n = s.length();
    string ans = "";
    for(int i = 0; i < n; i++) {
        string word = "";
        while(i < n && s[i] != ' '){
            word += s[i];
            i++;
        }
        ans = word + " " + ans;
    }
    return ans;
}
int main(){
    string s = "the sky is blue";
    cout << reverseString(s);
    return 0;
}