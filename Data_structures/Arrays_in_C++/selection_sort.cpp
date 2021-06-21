#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O(n^2)
void selectionSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
                // swap(arr[j],arr[i]);
            }   
        }   
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}