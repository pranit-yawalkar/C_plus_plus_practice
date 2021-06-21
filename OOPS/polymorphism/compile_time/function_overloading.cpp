#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void func(){
            cout<<"Function with no args"<<endl;
        }
        void func(int a){
            cout<<"func with "<<a<<" as arg"<<endl;
        }
        void func(double a){
            cout<<"func with "<<a<<" as arg"<<endl;
        }
};

int main(){
    A a;
    a.func();
    a.func(12);
    a.func(1.0001);
    return 0;
}