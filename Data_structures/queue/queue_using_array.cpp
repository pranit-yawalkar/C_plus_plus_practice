#include<bits/stdc++.h>
using namespace std;
#define n 20

class Queue{
    int* arr;
    int front;
    int back;
    
    public:
        Queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }

        void enqueue(int x){
            if(back==n-1){
                cout<<"Queue overflow"<<endl;
                return;
            }
            arr[++back] = x;
            if(front==-1){
                front++;
            }
        }

        void dequeue(){
            if(front==-1 || front>back){
                cout<<"No elements in queue"<<endl;
                return;
            }
            front++;
        }

        int peek(){
            if(front==-1 || front>back){
                cout<<"No elements in queue"<<endl;
                return -1;
            }
            return arr[front];
        }

        bool isEmpty(){
            if(front==-1 || front>back){
                return true;
            }
            return false;
        }
};

int main(){
    Queue q;
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(15);
    q.enqueue(16);

    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.isEmpty()<<endl;
    return 0;
}