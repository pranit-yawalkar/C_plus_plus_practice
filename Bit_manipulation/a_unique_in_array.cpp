// Write a program to find a unique number in an array where all numbers except
// one, are present twice.
// Hint: A ⊕ B ⊕ B ⊕ A ⊕ C = C. All those numbers which occur twice will get nullified
// after ⊕ operation.

#include<bits/stdc++.h>
using namespace std;

int unique(int arr[], int n){
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum^arr[i];
    }
    return xorSum;
}


int main(){
    int arr[] = {1,2,3,4,1,2,3};
    cout<<unique(arr, 7)<<endl;
    return 0;
}