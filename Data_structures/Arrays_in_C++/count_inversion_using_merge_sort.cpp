#include<bits/stdc++.h>
using namespace std;

// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

// Brute Force Approach
// Time Complexity: O(N^2)
long long inv(int arr[], int n){
    long long invc = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                invc++;
            }
        }
    }
    return invc;
}

// Merge Sort Approach
// Time Complexity: O(N log N)
long long merge(int arr[], int l, int mid, int r){
    int inv = 0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            i++;k++;
        }
        else{
            // a[i] > b[j]
            arr[k] = b[j];
            inv+=n1-i;
            j++;k++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++;k++;
    }
    return inv;
}


long long mergeSort(int arr[], int l, int r){
    long long inv = 0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=mergeSort(arr, l, mid);
        inv+=mergeSort(arr, mid+1, r);
        inv+=merge(arr, l, mid, r);
    }
    return inv;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<mergeSort(arr, 0, n-1)<<endl;
    cout<<inv(arr, n)<<endl;
    return 0;
}