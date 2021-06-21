#include<bits/stdc++.h>
using namespace std;


// Brute Force Approach
// int main(){
//     int n, m;
//     cin>>n>>m;
//     int arr[n][m];
//     int target;cin>>target;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     bool found = false;
//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < m; k++)
//         {
//             if (arr[i][k] == target)
//             {
//                 found = true;
//             }
//         }
//     }
//     if(found == true)
//         cout<<"Element found"<<endl;
//     else{
//         cout<<"Element not found"<<endl;
//     }
//     //Time Complexity-->O(n*m)
//     return 0;
// }
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    int target;cin>>target;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    bool found = false;
    int r = 0, c = m-1;
    while (r<m && c>=0)
    {
        if(arr[r][c] == target){
            cout<<"Found at: "<<r<<" "<<c<<endl;
            found = true;
        }
        arr[r][c] > target? c-- : r++;
    }
    
    if(found == true)
        cout<<"Element found"<<endl;
    else{
        cout<<"Element not found"<<endl;
    }
    //Time Complexity-->O(n+m)
    return 0;
}