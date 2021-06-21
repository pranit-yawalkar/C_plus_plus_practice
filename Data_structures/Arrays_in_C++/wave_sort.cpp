#include<bits/stdc++.h>
using namespace std;

// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
// Time Complexity: O(N), single pass
// Space Complexity: O(1)
void waveSort(int arr[], int n){
    for(int i=1;i<n;i+=2){
        if(arr[i]>arr[i-1])
            swap(arr[i], arr[i-1]);
        if(arr[i]>arr[i+1] && i<n-1)
            swap(arr[i], arr[i+1]);
    }
}

int main(){
    int arr[] = {7, 9, 5, 6, 8, 2, 3, 4};
    int n = 8;
    waveSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}