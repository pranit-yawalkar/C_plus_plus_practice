#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: \n";
    cin>>n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}