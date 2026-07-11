#include <bits/stdc++.h>

using namespace std;
class Node {
    public:
    int data;
    Node * next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
class List {
    public:
    Node*head;
    Node*tail;
    List (){
        head = NULL;
        tail = NULL;
    }
    void insertB(int val) {
        Node * newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        else {
            newNode -> next = head;
            head = newNode;
            return;
        }

    }
    void printll(Node * head) {
        Node * temp = head;
        while (temp != NULL) {
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }

};
int main() {
    List ll;
    ll.head = new Node(1);
    ll.head->next = new Node(2);
    ll.head->next->next = new Node(3);
    ll.insertB(0);
    ll.printll(ll.head);

    return 0;
}
