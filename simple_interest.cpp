#include <iostream>
using namespace std;

int main()
{
    int p, r, n, i;
    cout << "Enter the values of P, R and N: " << endl;
    cin >> p >> r >> n;
    i = (p * r * n) / 100;
    cout << "Simple Interest is: " << i << endl;

    return 0;
}