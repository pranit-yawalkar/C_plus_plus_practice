#include<bits/stdc++.h>
using namespace std;

// Objective: To find the first occurrence, we return as soon as we find the element.
// To find the last occurrence, we return the result we get from further function
// calls.
// Base Case would be when you reach the end of the array.
// Time Complexity: O(N)
// Space Complexity: O(N) for function call stack


int firstOcc(int arr[], int n, int i, int key){
    if(i==n)
        return -1;
    if(arr[i]==key)
        return i;
    return firstOcc(arr, n, i+1, key);
}

int lastOcc(int arr[], int n, int i, int key){
    if(i==n)
        return -1;
    int restArray = lastOcc(arr, n, i+1, key);
    if(restArray!=-1)
        return restArray;
    if(arr[i]==key)
        return i;
    return -1;
}

int main(){
    int arr[] = {1,4,5,3,2,4,5};
    cout<<firstOcc(arr, 7, 0, 4)<<endl;
    cout<<lastOcc(arr, 7, 0, 4)<<endl;
    return 0;
}