#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(N) 
// Space Complexity: O(N)
int add(int n){ 
    if(n==0)
        return 0;
    return n+add(n-1); 
}

int main(){
    int n;
    cin>>n;
    cout<<add(n)<<endl;
    return 0;
}