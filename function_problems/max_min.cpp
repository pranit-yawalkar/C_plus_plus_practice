#include<iostream>
using namespace std;

int maxx(int a, int b, int c){
    if ((a>b) && (a>c)){
        return a;
    }
    else if ((b>a) && (b>c)){
        return b;
    }
    else{
        return c;
    }
}

int minn(int a, int b, int c){
    if ((a<b) && (a<c)){
        return a;
    }
    else if ((b<a) && (b<c)){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a, b, c;
    cout<<"Enter the value of a, b and c: "<<endl;
    cin>>a>>b>>c;
    cout<<"The max no is "<<maxx(a, b, c)<<endl;
    cout<<"The min no is "<<minn(a, b, c)<<endl;
    return 0;
}