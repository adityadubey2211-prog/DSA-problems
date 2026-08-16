# include<bits/stdc++.h>
using namespace std;
class Myqueue{
    private:
    int* q;
    int front;
    int rear;
    int capacity;
    int count;
    public:
    Myqueue(int size){
        capacity = size;
        q = new int[capacity];
        front = 0;
        rear = -1;
        count = 0;
    }
    ~Myqueue(){
        delete []q;
    }
    void push(int x){
        if(count == capacity){
            cout<<"queue is full"<<endl;
            return;
        }
        rear = (rear + 1) % capacity;
        q[rear] = x;
        count++;
    }
    
    int pop(){
        if(count == 0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int data =  q[front];
        front = (front + 1)% capacity;
        count--;
        return data;
    }
    int peek(){
        if(count == 0){
            cout<<"q is empty"<<endl;
            return -1;
        }
        cout<<q[front]<<endl;
        return q[front];
    }
    bool isEmpty(){
        if(count == 0){
            cout<<"q is empty"<<endl;
        }
        else{
            cout<<"q is not empty"<<endl;
        }
    }
    void display(){
       int i = 0;
       for(int j= 0; j<count; j++){
          cout<<q[i]<<" ";
          i = (i +1)% capacity;
       }
       cout<<endl;
    }
};
int main(){
    Myqueue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.pop()<<endl;
    q.peek();
    q.isEmpty();
    q.display();
}