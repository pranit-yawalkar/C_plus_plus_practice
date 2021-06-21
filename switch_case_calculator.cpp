#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "Enter an operator: " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Operator not found!" << endl;
        break;
    }

    return 0;
}