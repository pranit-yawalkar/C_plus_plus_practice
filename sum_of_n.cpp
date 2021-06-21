#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number n: " << endl;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        sum += n;
        n -= 1;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}