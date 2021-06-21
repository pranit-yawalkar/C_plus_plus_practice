#include<iostream>
using namespace std;

// To find no of leading zeros
unsigned int clz(unsigned int num) {
    return __builtin_clz(num);
}

// To find no of trailing zeros
unsigned int ctz(unsigned int num) {
    return __builtin_ctz(num);
}

// To find no of ones
unsigned int onescount(unsigned int num) {
    return __builtin_popcount(num);
}

int main(){
    cout<<clz(2)<<endl;
    cout<<ctz(2)<<endl;
    cout<<clz(7)<<endl;
    cout<<onescount(7)<<endl;
    return 0;
}