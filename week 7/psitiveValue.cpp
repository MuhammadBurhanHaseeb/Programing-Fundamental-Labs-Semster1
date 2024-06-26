#include <iostream>
#include <cmath>
using namespace std;
void positiveValue(int no);
main()
{
    int no;
    cout << "enter the no";
    cin >> no;
    positiveValue(no);
}
void positiveValue(int no)
{
    while (no < 0)
    {
        cout << "error" << no << endl;
        cout << "enter the no";
        cin >> no;
    }
    cout << "ok value is positive" << endl;
    cout << "exists" << endl;
}