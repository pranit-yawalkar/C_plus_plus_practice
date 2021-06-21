#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3;
    int a[n][n] = {{1,3,5}, {2,4,6}, {7,9,11}};
    for (int i = 0; i < n; i++)
    {
            for (int j = i; j < n; j++) // Important line
            {
                swap(a[i][j], a[j][i]);
            }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    //Time complexity--> O(n^2)
    //Space complexity-->O(1)
    return 0;
}