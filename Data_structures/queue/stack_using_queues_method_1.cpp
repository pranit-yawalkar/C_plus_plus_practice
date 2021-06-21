#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int>q1;
    public:
        void push(int val){
            queue<int> temp;
            temp.push(val);
            while(!q1.empty()){
                temp.push(q1.front());
                q1.pop();
            }
            swap(temp, q1);
        }

        void pop(){
            q1.pop();
        }

        int top(){
            return q1.front();
        }

        bool isEmpty(){
            return q1.empty();
        }
};


int main(){
    Stack st;
    st.push(12);
    st.push(16);
    st.push(14);
    st.push(11);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.isEmpty()<<endl;

    return 0;
}