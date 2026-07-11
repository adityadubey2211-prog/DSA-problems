# include <bits/stdc++.h>
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
    Node*cycle(Node*head){
        Node*slow ;
        Node*fast;
        slow = fast = head;
        bool iscycle = false;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                iscycle = true;
                break;
            }
        }
        if(!iscycle){
            return NULL;
        }
        slow = head;
        while(slow != fast){
            slow = slow  -> next;
            fast = fast -> next;
        }
        return slow;
                
    }

int main(){
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n3;
    Node* head = n1;
    Node* ans = cycle(head);
    if(ans){
        cout<<"Cycle detected at node with value: "<<ans->data<<endl;
    }
    else{
        cout<<"No cycle detected."<<endl;
    }
}