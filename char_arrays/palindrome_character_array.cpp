#include<bits/stdc++.h>
using namespace std;

int main(){
    // Palindrome: Given a string s, on reversing the string we get the same string we
// call that string is a palindrome.
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check = 0;
        }
        
    }
    if (check)
        cout<<arr<<" is a palindrome"<<endl;
    else
        cout<<arr<<" is not a palindrome"<<endl;
    
    
    return 0;
}