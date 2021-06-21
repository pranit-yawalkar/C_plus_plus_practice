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

class C:public A{
    int c;
    public:
        void setC(int val){
            c = val;
        }
        void getC(){
            cout<<c<<endl;
        }
};

class D:public B{
    int d;
    public:
        void setD(int val){
            d = val;
        }
        void getD(){
            cout<<d<<endl;
        }
};

class E:public B{
    int e;
    public:
        void setE(int val){
            e = val;
        }
        void getE(){
            cout<<e<<endl;
        }
};

class F:public C{
    int f;
    public:
        void setF(int val){
            f = val;
        }
        void getF(){
            cout<<f<<endl;
        }
};

class G:public C{
    int g;
    public:
        void setG(int val){
            g = val;
        }
        void getG(){
            cout<<g<<endl;
        }
};

int main(){
    D d;
    d.setA(10);
    d.setB(20);
    d.getA();
    d.getB();

    F f;
    f.setA(10);
    f.getA();
    f.setC(20);
    f.getC();
    return 0;
}