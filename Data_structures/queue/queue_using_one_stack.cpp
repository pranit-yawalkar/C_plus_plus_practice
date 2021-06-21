#include<bits/stdc++.h>
using namespace std;

class QueueUsingStack{
    stack<int>s;
    public:
        void push(int x){
            s.push(x);
        }
        int pop(){
            if(s.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            int x = s.top();
            s.pop();
            if(s.empty()){
                return x;
            }
            int item = pop();
            s.push(x);
            return item;
        }
        bool isEmpty(){
            if(s.empty())
                return true;
            return false;
        }
};

int main(){
    QueueUsingStack q;
    q.push(12);
    q.push(11);
    q.push(13);
    q.push(14);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    cout<<q.isEmpty()<<endl;
    return 0;
}