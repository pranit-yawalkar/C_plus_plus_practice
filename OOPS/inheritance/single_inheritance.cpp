#include<bits/stdc++.h>
using namespace std;

class Base{
    int a;
    public:
        int b;int c;
        void setA(int val){
            a = val;                
        }
        void getA(){
            cout<<a<<endl;
        }
};

class Derived:public Base{
    public:
        void setB(int val){
            b = val;
        }
        void setC(int val){
            c = val;
        }
        void getB(){
            cout<<b<<endl;
        }
        void getC(){
            cout<<c<<endl;
        }
};

int main(){
    Derived a;
    a.setA(10);
    a.setB(20);
    a.setC(30);
    a.getA();
    a.getB();
    a.getC();
    return 0;
}