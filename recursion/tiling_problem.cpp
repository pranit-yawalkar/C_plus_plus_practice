#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(2 n )
// Space Complexity: O(2 n ) //Memory is used for call stack as well
int tilingWays(int n){
    if(n==0 || n==1)
        return n;
    return tilingWays(n-1) + tilingWays(n-2); // nothing but a fibonacci sequence
}

int main(){
    cout<<tilingWays(4)<<endl;
    return 0;
}