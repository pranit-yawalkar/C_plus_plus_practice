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

class B:public A{
    int b;
    public:
        void setB(int val){
            b = val;
        }
        void getB(){
            cout<<b<<endl;
        }
};

class C{
    int c;
    public:
        void setC(int val){
            c = val;
        }
        void getC(){
            cout<<c<<endl;
        }
};

class D:public B, public C{
    int d;
    public:
        void setD(int val){
            d = val;
        }
        void getD(){
            cout<<d<<endl;
        }
};

int main(){
    D d;
    d.setA(10);
    d.setB(20);
    d.setC(30);
    d.setD(40);
    d.getA();
    d.getB();
    d.getC();
    d.getD();
    
    return 0;
}