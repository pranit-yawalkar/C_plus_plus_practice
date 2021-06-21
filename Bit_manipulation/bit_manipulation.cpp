#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    // return (n>>pos) & 1;
    return (n & (1<<pos)!=0);
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n, int pos, int val){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (val<<pos));
}

int toggleBit(int n, int pos){
    return (n xor (1<<pos));
}

int main(){
    cout<<getBit(5, 2)<<endl;
    // cout<<setBit(5, 1)<<endl;
    // cout<<clearBit(5, 0)<<endl;
    // cout<<updateBit(5, 3, 1)<<endl;
    cout<<toggleBit(5, 0)<<endl;
    return 0;
}