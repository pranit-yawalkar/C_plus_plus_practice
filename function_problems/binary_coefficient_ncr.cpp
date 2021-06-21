#include<iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n, r;
    cout<<"Enter the value of n and r: "<<endl;
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<"Binary coefficient (NCR) of "<<n<<" and "<<r<<" is "<<ans<<endl;
    return 0;
}