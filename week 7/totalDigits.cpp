#include <iostream>
#include <cmath>
using namespace std;
int totaldigits(int no);
main()
{
    int result, no;
    cout << "enter the no";
    cin >> no;
    result = totaldigits(no);
    cout << result;
}
int totaldigits(int no)
{
    int count = 0;
    for (int x = no; x > 0; x = x / 10)
    {
        count = count + 1;
    }
    return count;
}