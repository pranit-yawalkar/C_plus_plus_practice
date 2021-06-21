#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number n: " << endl;
    cin >> n;
    int fact = 1;
    int m = 1;
    if (n < 0)
    {
        cout << "Error! Factorial of negative number doesnt't exist" << endl;
    }
    else
    {
        // for (int i = 1; i <= n; i++)
        // {
        //     fact *= i;
        // }
        while (m <= n)
        {
            fact *= m;
            m += 1;
        }

        cout << "The factorial of number " << n << " is " << fact << endl;
    }
    return 0;
}