#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(N)
// Space Complexity: O(N)
void inc(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}

void dec(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

int main(){
    int n;
    cin>>n;
    inc(n);
    cout<<endl;
    dec(n);
    return 0;
}