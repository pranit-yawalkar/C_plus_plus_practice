// HCF (Highest Common Factor). GCD of two
// numbers is the largest number that divides both of them.
// Idea
// We use the logic that
// gcd(a,b) = gcd(b,a%b)

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b){
        int rm = a%b;
        a = b;
        b = rm;
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}