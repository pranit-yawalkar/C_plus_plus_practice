#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(N)
// Space Complexity: O(N)
int power(int n, int p){
    if(p==0)
        return 1;
    return n*power(n, p-1);
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
    return 0;
}