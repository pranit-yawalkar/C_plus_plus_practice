#include<iostream>
using namespace std;

int check_even(int n){
    if (n%2==0){
        return 1;
    }
    return 0;
}


int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    if (check_even(n)){
        cout<<n<<" is an even number"<<endl;
    }
    else{
        cout<<n<<" is a odd number"<<endl;
    }
    return 0;
}