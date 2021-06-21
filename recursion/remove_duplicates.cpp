#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(N 2 )
// Space Complexity: O(N 2 )
// Time complexity will be O(N 2 ) because s.substr(i) takes O(N) times and it is called
// O(N) times.
// Space complexity will be O(N 2 ) because s.substr(i) gives a string of O(N) size and it
// is called O(N) times.
string removeDup(string s){
    if(s.length() == 0)
        return "";
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if(ch == ans[0])
        return ans;
    return ch+ans;
}

int main(){
    string s = "praaniiittt";
    cout<<removeDup(s)<<endl;
    return 0;
}