#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>&st, int k){
    if(st.empty()){
        st.push(k);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtBottom(st, k);
    st.push(temp);
}

void reverseStack(stack<int>&st){
    if(st.empty())
        return;
    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, temp);
}

int main(){
    stack<int>st;
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}