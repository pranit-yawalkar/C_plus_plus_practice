#include<bits/stdc++.h>
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

class Queue{
    public:
    Node* front;
    Node* back;

    Queue(){
        front = NULL;
        back = NULL;
    }

    void push(int val){
        Node* n = new Node(val);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        Node* todelete = front;
        front  = front->next;
        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return front->data;
    }

    bool isEmpty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){
    Queue q;
    q.push(12);
    q.push(13);
    q.push(11);
    q.push(15);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.isEmpty()<<endl;
    return 0;
}