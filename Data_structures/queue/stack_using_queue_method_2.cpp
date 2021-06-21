#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1;
    public:
        void push(int val){
            q1.push(val);
        }

        void pop(){
            if(q1.empty())
                return;
            queue<int> temp;
            while(q1.size()!=1){
                temp.push(q1.front());
                q1.pop();
            }
            q1.pop();
            swap(temp, q1);
        }

        int top(){
            if(q1.empty())
                return -1;
            queue<int>temp;
            while(q1.size()!=1){
                temp.push(q1.front());
                q1.pop();
            }
            int ans = q1.front();
            temp.push(ans);
            q1.pop();
            swap(temp, q1);
            return ans;
        }

        bool isEmpty(){
            if(q1.empty())
                return true;
            return false;
        }
};

int main(){
    Stack st;
    st.push(12);
    st.push(15);
    st.push(17);
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