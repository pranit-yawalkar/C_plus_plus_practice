#include<bits/stdc++.h>
using namespace std;

// Encapsulation: Hiding “sensitive” data from the user using access modifiers
class A{
    int a;
    protected:
        int c;
    public:
        int b;
        void setA(int val){
            a = val;
        }
        void setC(int a){
            c = a;
        }
        void setB(int val){
            b = val;
        }
        void getA(){
            cout<<a<<endl;
            cout<<"Calling getA"<<endl;
        }
        
};

class B : public A{
    public:
        int d;
        void getB(){
            cout<<b<<endl;
        }
        void getC(){
            cout<<c<<endl;
        }
};

int main(){
    B b;
    b.setA(10);
    b.setB(20);
    b.setC(30);
    b.getB();
    b.getC();
    b.getA();

    return 0;
}