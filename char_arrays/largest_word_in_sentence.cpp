#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int curLen = 0;
    int maxLen = 0;
    int st = 0, maxSt = 0;
    while (i<n)
    {
        if(arr[i] == ' ' || arr[i] == '\0'){
            if (curLen>maxLen)
            {
                maxSt = st;
                maxLen = curLen;
            }
            st = i+1;
            curLen = 0;
        }
        else{
            curLen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout<<arr<<endl;
    cout<<maxLen<<endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[maxSt+i];
    }
    cout<<endl;
    
    return 0;
}