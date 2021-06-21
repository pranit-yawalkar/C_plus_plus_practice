#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>maxNo)
    //     {
    //         maxNo = arr[i];
    //     }
    //     if (arr[i]<minNo)
    //     {
    //         minNo = arr[i];
    //     } 
    // } OR

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout<<"Maximum Number is: "<<maxNo<<endl;
    cout<<"Minimum Number is: "<<minNo<<endl;
    
    return 0;
}