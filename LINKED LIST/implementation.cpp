  # include <bits/stdc++.h>
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
class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } 
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        } 
    }    
    void printll(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void pop_front(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void pop_back(){
        if(head == NULL){
            cout<<"list is empty/n";
            return;
        }
        else if(head->next == NULL){
            delete head;
            head = tail = NULL;
        }
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    }
    void insertinmiddle(int val, int pos){
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i < pos-1; i++){
            if(temp == NULL){
                cout<<"Position out of bounds"<<endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void search(int val){
        Node*temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == val){
                cout<<"Element found at index "<<idx<<endl;
                return;
            }
            temp = temp->next;
            idx++;
        }
        cout<<"Element not found"<<endl;
    }
};
int main(){
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.push_back(50);
    ll.pop_front();
    ll.pop_back();
    ll.insertinmiddle(25, 2);
    ll.search(25);
    ll.printll();
    return 0;
}