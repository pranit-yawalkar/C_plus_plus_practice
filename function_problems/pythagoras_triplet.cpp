#include<bits/stdc++.h>
using namespace std;

bool check_pytho_triplet(int x, int y, int z){
    int a = max(x, max(y,z));
    int b, c;
    if (a == x){
        b = y;
        c = z;
    }
    else if (a == y){
        b == x;
        c == z;
    }
    else{
        b == x;
        c == y;
    }
    if (a*a == b*b + c*c){
        return true;
    }
    return false;
}

int main(){
    int a, b, c;
    cout<<"Enter the value of a, b, c: "<<endl;
    cin>>a>>b>>c;
    if (check_pytho_triplet(a, b, c))
    {
        cout<<"Pythagoras triplet"<<endl;
    }
    else{
        cout<<"Not a pythagoras triplet"<<endl;
    }
    return 0;
    
}