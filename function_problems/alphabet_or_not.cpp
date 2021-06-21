#include<iostream>
using namespace std;

void alphabet(char c){
    if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
        cout<<c<<" is an alphabet"<<endl;
    }
    else{
        cout<<c<<" is not an alphabet"<<endl;
    }
}

int main(){
    char c;
    cout<<"Enter the character: "<<endl;
    cin>>c;
    alphabet(c);
    return 0;
}