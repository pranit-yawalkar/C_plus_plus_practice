#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(N 2 )
// Space Complexity: O(N 2 )
void replacePi(string s){
    if(s.length() == 0)
        return;
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

// time and space complexity of O(n)
void replacepi(string& s, int k=0){
    if(k==s.length())
        return;
    if(s[k]=='p' && s[k+1]=='i'){
        cout<<"3.14";
        replacepi(s, k+2);
    }
    else{
        cout<<s[k];
        replacepi(s, k+1);
    }
}

int main(){
    string s = "piisequaltopi";
    replacePi(s);
    cout<<endl;
    replacepi(s);
    return 0;
}