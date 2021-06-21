#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "324643784678248";
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;
    return 0;
}