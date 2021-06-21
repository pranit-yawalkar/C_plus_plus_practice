#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n<=1){
        return false;
    }
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter the value of n: " << endl;
    cin >> num;
    cout << "Prime numbers are: ";
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}