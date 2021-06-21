#include<bits/stdc++.h>
using namespace std;

void increment(int *a){
    (*a)++;
    ++*a;
}

void sw(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 21;
    increment(&a);
    cout<<a<<endl;
    // int b = 4;
    // sw(&a, &b);
    // cout<<a<<" "<<b<<endl;
    return 0;
}