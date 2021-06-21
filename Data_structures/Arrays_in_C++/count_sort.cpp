#include<bits/stdc++.h>
using namespace std;

// The O(N) sort.
// Note: Only limited to small positive integers only.
// Time Complexity: O(N)
// Space Complexity: O(max(Arr))

void countSort(int arr[], int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }

    int count[k+1]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }

    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

int main(){
    // int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int arr[] = {1, 3, 2, 6, 7, 4, 8, 3, 5};
    int n=9;
    countSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}