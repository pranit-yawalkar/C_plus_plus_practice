#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(N 2 ) [IMP]
// Space Complexity: O(N 2 ) [IMP]
// Time complexity will be O(N 2 ) because s.substr(i) takes O(N) times and it is called
// O(N) times.
// Space complexity will be O(N 2 ) because s.substr(i) gives a string of O(N) size and it
// is called O(N) times.
void reverse(string s){
    if(s.length()==0)
        return;
    reverse(s.substr(1));
    cout<<s[0];
}
 
// reverse string with O(n) time and space
void reverseString(string s, int k=0){
    if(s.length()==k)
        return;
    reverseString(s, k+1);
    cout<<s[k];
}

// reverse string with O(n) time and O(1) space complexities
void reverseStr(string& s, int i=0){
    int n = s.length();
    if(i == n/2)
        return;
    swap(s[i], s[n-i-1]);
    reverseStr(s, i+1);
}

int main(){
    string s = "pranit";
    // cin>>s;
    // reverse(s);
    // reverseString(s);
    reverseStr(s);
    cout<<s;
    return 0;
}