#include<bits/stdc++.h>
using namespace std;

class QueueUsingStack{
    stack<int>s1;
    stack<int>s2;
    public:
        void push(int val){
            s1.push(val);
        }
        int pop(){
            if(s1.empty() && s2.empty()){
                cout<<"No element in queue"<<endl;
                return -1;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int ans = s2.top();
            s2.pop();
            return ans;
        }
        bool isEmpty(){
            if(s1.empty() && s2.empty()){
                return true;
            }
            return false;
        }
};

int main(){
    QueueUsingStack q;
    q.push(12);
    q.push(14);
    q.push(15);
    q.push(16);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.isEmpty()<<endl;

    return 0;
}