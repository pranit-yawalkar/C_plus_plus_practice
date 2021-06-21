#include <iostream>
using namespace std;

int main()
{
    int a;
    while (true)
    {
        cout << "Enter a number: " << endl;
        cin >> a;
        if (a % 2 == 0)
        {
            cout << a << " is even" << endl;
        }
        else
        {
            cout << a << " is odd" << endl;
        }
    }

    return 0;
}