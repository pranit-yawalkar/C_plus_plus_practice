#include<bits/stdc++.h>
using namespace std;

// Sieve of eratosthenes
// Algorithm: We start from 2, and on each encounter of a prime number, we mark
// its multiples as composite.
// Time Complexity: O(n log log n)
// Space Complexity: O(n)
void primeSieve(int n){
    int prime[n+1] = {0};
    for (int i = 2; i <= n ; i++)
    {
        if (prime[i]==0)
        {
            for (int j = i*i; j <= n; j+=i)
                prime[j] = 1;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if(prime[i]==0)
            cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    primeSieve(n);
    return 0;
}