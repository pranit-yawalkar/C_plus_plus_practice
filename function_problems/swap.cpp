#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b: "<<endl;
    // cin>>a>>b;
    a = 5;
    b = 7;

    swap(&a, &b);
    cout<<"The value of a: "<<a<<endl;
    cout<<"The value of b: "<<b<<endl;
    return 0;
}