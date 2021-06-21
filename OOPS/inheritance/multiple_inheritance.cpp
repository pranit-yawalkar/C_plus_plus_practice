#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
        void setA(int val){
            a = val;
        }
        void getA(){
            cout<<a<<endl;
        }
};

class B{
    int b;
    public:
        void setB(int val){
            b = val;
        }
        void getB(){
            cout<<b<<endl;
        }
};

class C:public A, public B{
    int c;
    public:
        void setC(int val){
            c = val;
        }
        void getC(){
            cout<<c<<endl;
        }
};

int main(){
    C c;
    c.setA(10);
    c.setB(20);
    c.setC(30);
    c.getA();
    c.getB();
    c.getC();
    return 0;
}