#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){ // Time complexity -> O(n)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
    cout<<key<<" is found at index "<<linearSearch(arr, n, key)<<endl;
    
    return 0;
}