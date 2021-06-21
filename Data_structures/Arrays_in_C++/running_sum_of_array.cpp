#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int runningSum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        runningSum += arr[i];
        arr[i] = runningSum;
        cout<<"Sum is: "<<runningSum<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}