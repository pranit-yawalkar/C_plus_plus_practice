#include<iostream>
using namespace std;

void vote(int age){
    if (age>=18){
        cout<<"Congrats, you are eligible for voting..."<<endl;
    }
    else{
        cout<<"Sorry, you are not eligible for voting..."<<endl;
    }
}

int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    vote(age);
    return 0;
}