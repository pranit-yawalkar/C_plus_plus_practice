#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the no of rows and columns: ";
    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}