#include <iostream>
using namespace std;

int main()
{
    double f, c;
    cout << "Enter the value of temp in degree F: " << endl;
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << "temp in c: " << c << endl;
    return 0;
}