#include<bits/stdc++.h>
using namespace std;

int get_max_area(vector<int>a){
    int n = a.size(); 
    int ans = 0, i = 0;
    stack<int>st;
    a.push_back(0);
    while(i<n){
        while(!st.empty() && a[st.top()]>a[i]){
            int t = st.top();
            int h = a[t];
            st.pop();
            if(st.empty()){
                ans = max(ans, h*i);
            } else{
                int len = i - st.top() -1;
                ans = max(ans, len*h);
            }
        }
        st.push(i);
        i++;
    }
    if(!st.empty()){
        while(!st.empty()){
            int t = st.top();
            int h = a[t];
            st.pop();
            if(st.empty()){
                ans = max(ans, h*i);
            } else{
                int len = i - st.top() -1;
                ans = max(ans, len*h);
            }
        }
    }

    return ans;
}   

int main(){
    // vector<int>a = {2,1,5,6,2,3};
    vector<int>a = {1, 2, 3, 4, 5};

    cout<<get_max_area(a)<<endl;
    return 0;
}