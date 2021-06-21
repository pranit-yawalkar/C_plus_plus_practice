#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, img;
    public:
        Complex(){};
        Complex(int a, int b){
            real = a; img = b;
        }
        Complex operator + (Complex &base){
            Complex res;
            res.img = img + base.img;
            res.real = real + base.real;
            return res;
        }
        void display(){
            cout<<real<<" + i"<<img<<endl;
        }
};

int main(){
    Complex c1(20, 10), c2(10, 20);
    Complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}