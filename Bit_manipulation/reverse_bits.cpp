#include<bits/stdc++.h>
using namespace std;

int reverseBits(int n){
    int rev = 0;
    while (n>0)
    {
        rev<<=1;
        if(n&1 == 1)
            rev^=1;
        n>>=1;
    }
    return rev;
}

int main(){
    unsigned int n = 6;
    // cin>>n;
    cout<<reverseBits(n)<<endl;
    return 0;
}