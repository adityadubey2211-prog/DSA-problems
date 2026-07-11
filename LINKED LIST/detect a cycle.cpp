# include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    public:
    Node*head;
    Node*tail;
    List(){
        head = NULL;
        tail = NULL;
    }
    bool cycle(Node*head){
        Node*slow ;
        Node*fast;
        slow = fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};
int main(){
    List ll;
    ll.head = new Node(1);
    Node*second = new Node(2);
    Node*third = new Node(3);
    ll.head -> next = second;
    second -> next = third;
    third -> next = second;
    if(!ll.cycle(ll.head)){
        cout<<"no cycle"<<endl;
    }
    else{
        cout<<"yes cycle"<<endl;
    }
    return 0;
}