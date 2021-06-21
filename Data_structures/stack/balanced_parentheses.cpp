#include<bits/stdc++.h>
using namespace std;

bool check_parentheses(string s){
    stack<char>st;
    bool ans = true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        } else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        } else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        } else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return ans;
}

int main(){
    string s = "{2+(4+5)";
    if(check_parentheses(s)){
        cout<<"valid string"<<endl;
    } else{
        cout<<"Invalid string"<<endl;
    }
    return 0;
}