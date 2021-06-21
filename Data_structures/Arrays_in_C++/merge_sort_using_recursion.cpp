#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){  // Divide & conquer problem
    int s1 = mid-l+1;
    int s2 = r-mid;

    int a[s1];
    int b[s2];
    for (int i = 0; i < s1; i++)
        a[i] = arr[l+i];
    for(int i=0;i<s2;i++)
        b[i] = arr[mid+1+i];

    int i=0; int j=0; int k=l;
    while(i<s1 && j<s2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            k++;i++;
        }
        else{
            arr[k] = b[j];
            k++;j++;
        }
    }

    while(i<s1){
        arr[k] = a[i];
        k++;i++;
    }

    while(j<s2){
        arr[k] = b[j];
        k++;j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}


int main(){
    int n=7;
    int arr[n] = {8,9,7,4,9,5,1};
    mergeSort(arr, 0, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}