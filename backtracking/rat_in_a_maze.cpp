#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr, int x, int y, int n, int m){
    if(x<m && y<n && arr[x][y]==1)
        return true;
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int m, int** solArr){
    if (x==(m-1) && y==(n-1))
    {
        solArr[x][y]=1;
        return true;
    }

    if (isSafe(arr, x, y, n, m))
    {
        solArr[x][y] = 1;
        if (ratInMaze(arr, x+1, y, n, m, solArr))
        {
            return true;
        }
        if (ratInMaze(arr, x, y+1, n, m, solArr))
        {
            return true;
        }
        solArr[x][y] = 0;   // backtracking
        return false;
    }
    return false;
}


int main(){
    int n, m;
    cin>>n>>m;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int** solArr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < m; j++)
        {
            solArr[i][j] = 0;
        }
    }

    if (ratInMaze(arr,0,0,n,m,solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<solArr[i][j]<<" ";
            }cout<<endl;
        }
    }
    return 0;
}