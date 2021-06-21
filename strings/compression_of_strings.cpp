#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "aaaaaaaammmmaazzzzzoonnnnnn";
    int n = s.size();
    // delete reapeating characters
    char ans[10];
    for (int i = 0; i < 9; i++)
    {
        ans[i] = ' ';
    }
    
    ans[0] = s[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i]!=s[i-1])
        {
            ans[count] = s[i];
            count++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}