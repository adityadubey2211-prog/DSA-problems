#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode*Next;
    ListNode(int val){
        this->val = val;
        Next = NULL;
    }


};
ListNode* middleofll(ListNode* head){
    if(head == NULL){
        return NULL;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast -> Next != NULL){
        fast = fast -> Next -> Next;
        slow = slow -> Next;
    }
    return slow;
}
int main(){
    ListNode* head = new ListNode(1);
    head->Next = new ListNode(2);
    head->Next->Next = new ListNode(3);
    head->Next->Next->Next = new ListNode(4);
    head->Next->Next->Next->Next = new ListNode(5);
    ListNode* middle = middleofll(head);
    if(middle != NULL){
        cout<<"Middle element is: "<<middle->val<<endl;
    }
    else{
        cout<<"List is empty"<<endl;
    }
    return 0;
}