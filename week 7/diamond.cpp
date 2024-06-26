#include <iostream>
using namespace std;

main()
{
    int n;
    system("cls");
    cout << "Enter no. of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        cout << " ";

        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = i; k <= n - 1; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}