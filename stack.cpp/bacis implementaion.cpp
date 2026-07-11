# include<bits/stdc++.h>
using namespace std;
class Stack{
    vector<int> v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(!v.empty()){
            v.pop_back();
        }
    }
    int top(){
        if(!v.empty()){
            return v.back();
        }
        return -1;
    }
    bool empty(){
        return v.empty();
    }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    return 0;
}