#include<bits/stdc++.h>
using namespace std; 

// Time Complexity: O(N)
// Space Complexity: O(N)
int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}