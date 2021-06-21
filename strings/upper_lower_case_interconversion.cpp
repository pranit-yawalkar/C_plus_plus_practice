#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "dghjkfnasjkfuihfncv";
    // Approach 1
    // to Upper case
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    cout<<s<<endl;

    // to Lower case
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    
    cout<<s<<endl;

    // Approach 2
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    return 0;
}