#include<iostream>
using namespace std;
#define n 100

class Stack{
    int* arr;
    int top;
    public:
        Stack(){
            arr = new int[n];
            top = -1;
        }

        void push(int val){
            if(top==(n-1)){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            top++;
            arr[top] = val;
        }

        void pop(){
            if(top==-1){
                cout<<"No element to pop"<<endl;
                return;
            }
            top--;
        }

        int Top(){
            if(top==-1){
                cout<<"No element in stack"<<endl;
                return -1;
            }
            return arr[top];
        }

        bool empty(){
            return top==-1;
        }
};

int main(){
    Stack st;
    st.push(12);
    st.push(10);
    st.push(11);
    st.pop();
    cout<<st.empty()<<endl;
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;

    return 0;
}