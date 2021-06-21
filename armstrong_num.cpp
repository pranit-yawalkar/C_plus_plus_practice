#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int sum = 0;
    int original_num = n;
    while (n>0)
    {
        int lastdigit = n%10;
        sum += lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(sum == original_num){
        cout<<original_num<<" is a Armstrong number"<<endl;
    }
    else{
        cout<<original_num<<" is not a Armstrong number"<<endl;
    }
    return 0;
}