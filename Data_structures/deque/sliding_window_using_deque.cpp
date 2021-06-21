#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &i:a)
        cin>>i;

    deque<int>q;
    vector<int>ans;
    int i=0;
    for(;i<k;i++){
        while(!q.empty() && a[q.back()]<a[i]){
            a.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);

    for(;i<n;i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() && a[q.back()]<a[i]){
            a.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}