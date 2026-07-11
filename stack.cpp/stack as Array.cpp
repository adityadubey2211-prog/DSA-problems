# include<bits/stdc++.h>
using namespace std;
class StackArray{
    private:
    int*Array;
    int capacity;
    int topindex;
    public:
    StackArray(int size){
        Array = new int[size];
        capacity = size;
        topindex = -1;
    }
    ~StackArray(){
        delete []Array;
    }
    void push(int x){
        if(topindex >= capacity - 1){
            return;
        }
        topindex++;
        Array[topindex] = x;
    }
    int pop(){
        if(topindex == -1){
            return -1;
        }
        int value = Array[topindex];
        topindex--;
        return value;
    }
    int top(){
        if(topindex == -1){
            return -1;
        }
        return Array[topindex];
    }
    bool isEmpty(){
        return (topindex == -1);
    }
};
int main() {
    StackArray st(5);

    cout << "Is Stack Empty? " << st.isEmpty() << endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Stack Overflow
    st.push(60);

    cout << "Top Element: " << st.top() << endl;

    cout << "Popped: " << st.pop() << endl;
    cout << "Popped: " << st.pop() << endl;

    cout << "Top Element: " << st.top() << endl;

    cout << "Is Stack Empty? " << st.isEmpty() << endl;

    cout << "Popped: " << st.pop() << endl;
    cout << "Popped: " << st.pop() << endl;
    cout << "Popped: " << st.pop() << endl;

    // Stack Underflow
    cout << "Popped: " << st.pop() << endl;

    cout << "Is Stack Empty? " << st.isEmpty() << endl;

    return 0;
}