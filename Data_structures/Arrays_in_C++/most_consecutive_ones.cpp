#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(vector<int>a, int n, int k){
    int zeroCount = 0, i = 0, ans = 0;
    for(int j=0;j<n;j++){
        if(a[j]==0){
            zeroCount++;
        }
        while(zeroCount>k){
            if(a[i]==0)
                zeroCount--;
            i++;
        }
        ans = max(ans, j-i+1);
    }
    return ans;
}

int main(){
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &i:a)
        cin>>i;
    cout<<consecutiveOnes(a, n, k);
    return 0;
}