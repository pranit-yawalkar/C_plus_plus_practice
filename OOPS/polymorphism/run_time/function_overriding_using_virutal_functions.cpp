#include<bits/stdc++.h>
using namespace std;

// Run Time Polymorphism
// Virtual functions are used to achieve run time/ dynamic polymorphism only.
// Pure virtual functions are used to make a class Abstract.
class Base{
    public:
        virtual void func(){
            cout<<"Base func"<<endl;
        }
        virtual void display(){
            cout<<"Base display"<<endl;
        }
};

class Derived:public Base{
    public:
        void func(){
            cout<<"Derived func"<<endl;
        }
        void display(){
            cout<<"Derived display"<<endl;
        }
};

int main(){
    // Derived d;
    // Base &b = d; // taking derived class reference
    // b.func();
    // b.display();

    Base* b = new Derived(); // referencing derived class using base class pointer
    b->display();
    b->func();
    return 0;
}