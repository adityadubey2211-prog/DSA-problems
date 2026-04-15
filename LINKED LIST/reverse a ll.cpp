#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        next = NULL;
    }
};
    ListNode*reversell(ListNode* head){
        ListNode*prev = NULL;
        ListNode*curr = head;
        ListNode*next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode* newHead = reversell(head);
    ListNode*temp = newHead;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    return 0;
}