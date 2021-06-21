#include<bits/stdc++.h>
using namespace std;


int hammingDistance(int a, int b){
    // int count = 0;
    // int n = a^b;
    // while (n)
    // {
    //     count+=n&1;
    //     n>>=1;
    // }
    // return count;

    // OR in one line
    return bitset<32>(a^b).count();
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<hammingDistance(a, b)<<endl;
    return 0;
}