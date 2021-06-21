#include<iostream>
using namespace std;

void swastik(int n){
    // first component
    cout<<"*";
    for(int i=0;i<(n-3)/2;i++){
        cout<<" ";
    }
    for(int i=0;i<(n+1)/2;i++){
        cout<<"*";
    }cout<<endl;

    // second component
    for(int row=0;row<(n-3)/2;row++){
        cout<<"*";
        for(int i=0;i<(n-3)/2;i++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    // third component
    for(int i=0;i<n;i++){
        cout<<"*";
    }cout<<endl;

    // fourth component
    for(int row=0;row<(n-3)/2;row++){
        for(int i=0;i<(n-3)/2+1;i++){
            cout<<" ";
        }
        cout<<"*";
        for(int i=0;i<(n-3)/2;i++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    // fifth component
    for(int i=0;i<(n+1)/2;i++){
        cout<<"*";
    }
    for(int i=0;i<(n-3)/2;i++){
        cout<<" ";
    }
    cout<<"*"<<endl;
}


int main(){
    int n;
    cin>>n;
    swastik(n);
    return 0;
}