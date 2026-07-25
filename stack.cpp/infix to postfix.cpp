# include <bits/stdc++.h>
using namespace std;
int prec (char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixTopostfix(string s){
    stack<char> st;
    int n = s.length();
    string result;
    for(int i =0; i<n; i++){
        char c = s[i];
        if(c >= 'A' && c <='Z' || c>='a' && c <= 'z' || c >= '0' && c <= '9'){
            result += c;
        }
        else if(c == '('){
            st.push(c);
        }
        else if(c == ')'){
            while(!st.empty() && st.top() != '('){
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(st.top()) <= prec(s[i])){
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    return result;
}
int main(){
    string s = "A+B";
    cout << infixTopostfix(s);
    return 0;
}