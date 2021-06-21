#include<bits/stdc++.h>
using namespace std;

// Objective: Check if the array is in strictly increasing order or not.
// Time Complexity: O(N)
// Space Complexity: O(N) for function call stack

bool sorted(int arr[], int n){
    if(n==1)
        return true;
    return (arr[0]<arr[1] && sorted(arr+1,n-1));
}

int main(){
    int arr[] = {1,3,7,5,8,11,14,16};
    cout<<sorted(arr, 8)<<endl;
    return 0;
}