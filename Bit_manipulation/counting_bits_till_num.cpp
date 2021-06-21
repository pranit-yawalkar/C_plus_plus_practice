// Given an integer num, return an array of the number of 1's in the binary representation of every number in the range [0, num].
// Input: num = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10

#include<bits/stdc++.h>
using namespace std;

// Approach 1
int count(int n){
    int count = 0;
    while (n)
    {
        n &= n-1;
        count++;
    }
    return count;
}

vector<int> countBits(int n){
    vector<int> result;
    for (int i = 0; i <= n; i++)
    {
        result.push_back(count(i));
    }
    return result;
}


// Approach 2 // It is not clear to me
vector<int> countBits2(int n){
    vector<int> result(n+1, 0);
    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!(i & (i-1)))
        {
            p = 0;
        }
        result[i] = (result[p++]+1);
    }
    return result;
}

// Approach 3
vector<int> countBits3(int n){
    vector<int> result(n+1);
    result[0] = 0;
    for (int i = 1; i <= n; i++)
        result[i] = result[i/2] + i%2;
    return result;
}

int main(){
    int n = 5;
    // cin>>n;
    vector<int> result = countBits2(n);
    for (int i=0; i<n+1; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}