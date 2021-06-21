#include<bits/stdc++.h>
using namespace std;

int setBitNumber(int n){ // This has complexity of aprox O(n/2)
    if(n==0)
        return 0;
    int msb = 0;
    while(n!=0){
        n/=2;
        msb++;
    }
    return 1<<msb-1; 
}
// OR other efficient function with complexity O(1)
int setBitNumber2(int n){
    n |= n>>1;
    n |= n>>2;
    n |= n>>4;
    n |= n>>8;
    n |= n>>16;

    n = n+1;
    return n>>1;

}

// Another most efficient method with O(1) complexity
int setBitNumber3(int n){
    int k = (int)(log2(n));
    return 1<<k;
}

int main(){
    int n;
    cin>>n;
    cout<<setBitNumber(n)<<endl;
    cout<<setBitNumber2(n)<<endl;
    cout<<setBitNumber3(n)<<endl;
    return 0;
}