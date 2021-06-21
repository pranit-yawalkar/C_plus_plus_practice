#include<bits/stdc++.h>
using namespace std;

bool pairSum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while (low<high)
    {
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low]+arr[high]>k)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    // int n, k;
    // cin>>n;
    // cin>>k;
    // int arr[n]; 
    int arr[] = {2,4,7,11,14,26,20,21};// Array should be sorted
    int k = 31;
    int n = 8;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    cout<<pairSum(arr, n, k);
    // Time Complexity-->O(n)
    // Space Complexity--> O(1)
    return 0;
}