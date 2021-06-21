#include<bits/stdc++.h>
using namespace std;
// while( num ! = 1 ):
// We keep on dividing it with its smallest prime factor.
// The smallest prime factor is pre-calculated using a slightly modified prime sieve.
// Since we start from 2 and go on, we mark the first multiple as the spf.
// Preprocessing for Sieve: O(n log log n)
// Time Complexity for factorization: O(log n)
// Space Complexity: O(n)
// Additional Question:

void primeFactor(int n){
    int spf[n+1] = {0};
    for (int i = 2; i <= n; i++)
        spf[i] = i;
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                if(spf[j] == j)
                    spf[j] = i;
            }
        }
    }
    
    while (n!=1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
}


int main(){
    int n = 50;
    // cin>>n;
    primeFactor(n);
    return 0;
}