#include<bits/stdc++.h>
using namespace std;

// arr must  be sorted to use this algo

int binarySearch(int arr[], int n, int key){ // Time  Complexity -> O(log n)
    int s = 0;
    int e = n;
    while (s<=3)
    {
        int mid = (s+e)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    int n, key;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a key to find: "<<endl;
    cin>>key;
    cout<<key<<" is found at index "<<binarySearch(arr, n, key)<<endl;
    

    return 0;
}