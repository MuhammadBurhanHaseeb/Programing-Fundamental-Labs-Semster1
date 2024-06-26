#include <iostream>
#include <cmath>
using namespace std;
void show();
main()
{
    show();
}
void show()
{
    int sum = 0;
    int x = 1;
    while (x <= 5)
    {

        sum = sum + x;
        x++;
    }
    cout << sum;
}
