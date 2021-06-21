#include<bits/stdc++.h>
using namespace std;


// Time Complexity: O(N 2 ) [IMP]
// Space Complexity: O(N 2 ) [IMP]
// Time complexity will be O(N2) because s.substr(i) takes O(N) times and it is called
// O(N) times.
// Space complexity will be O(N2) because s.substr(i) gives a string of O(N) size and it
// is called O(N) times
string moveAllX(string s){
    if(s.length()==0)
        return "";
    char ch = s[0];
    string ans = moveAllX(s.substr(1));
    if (ch=='x')
        return ans+ch;
    return ch + ans;
}

// O(n) time and space
string moveXToEnd(string s, int k=0){
    if(s.length()==k)
        return "";
    char ch = s[k];
    string ans = moveXToEnd(s, k+1);
    if(ch=='x')
        return ans+ch;
    return ch+ans;
}

int main(){
    string s = "pxxraxxnxxixt";
    cout<<moveXToEnd(s)<<endl;
    cout<<moveAllX(s)<<endl;
    return 0;
}