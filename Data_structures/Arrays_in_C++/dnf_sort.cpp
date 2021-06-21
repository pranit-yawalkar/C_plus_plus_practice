#include<bits/stdc++.h>
using namespace std;

// Given an array containing only 0,1 and 2. You have to sort the array in O(N) time, single pass, and O(1) space.
// Time Complexity: O(N), single pass
// Space Complexity: O(1)
void dnfSort(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid], arr[low]);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[] = {2,1,0,1,2,0,1};
    int n = 7;
    dnfSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}