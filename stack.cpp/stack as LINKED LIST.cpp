# include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class Stack{
    Node* head;
    public:
    Stack(){
        head = NULL;
    }
    void push(int x){
        Node*newNode = new Node(x);
        newNode -> next = head;
        head = newNode;
    }
    int pop(){
        if(head == NULL){
            return -1;
        }
        Node*temp = head;
        int val = temp -> data;
        head = head -> next;
        delete temp;
        return val;
    }
    int top(){
        if(head == NULL){
            return -1;
        }
        return head -> data;
    }
    bool isEmpty(){
        return (head == NULL);
    }
};

int main(){

    Stack st;

    cout << st.isEmpty() << endl;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    cout << st.pop() << endl;
    cout << st.pop() << endl;

    cout << st.top() << endl;

    cout << st.pop() << endl;

    cout << st.pop() << endl;

    cout << st.isEmpty() << endl;

    return 0;
}