#include<bits/stdc++.h>
using namespace std;
#define MAX 100

void sieve(vector<int>&prime){
    vector<int>v(MAX,0);
    v[2] = 1;
    for (long int i = 3; i < MAX; i+=2){
        v[i] = 1;
    }

    for (long int i = 3; i < MAX; i+=2)
    {
        if (v[i]==1)
        {
            for (long int j = i*i; j < MAX; j+=i){
                v[j] = 0;
            }
        }
    }
    for (long int i = 0; i < MAX; i++)
    {
        if(v[i] == 1) 
            prime.push_back(i);
    }  
}

void printPrime(int l, int r, vector<int>p){
    long int size = r-l+1;
    vector<int>ans(size);
    for (int i = 0; i < size; i++)
        ans[i] = 1;

    for (long int i = 0; p[i]*p[i] <= r; i++)
    {
        long int base = (l/p[i])*p[i];
        if (base<1)
            base+=p[i];
        for (long int  j = base; j <= r; j+=p[i])
            ans[j-l] = 0;
        if (base==p[i])
            ans[base-l] = 1;
    }
    
    for (int i = 0; i < size; i++)
    {
        if (ans[i])
            cout<<l+i<<" ";
    }
}

int main(){
    vector<int>prime;
    sieve(prime);
    long long a, b;
    cin>>a>>b;
    // a = 5, b =10;
    printPrime(a,b,prime);
    return 0;
}