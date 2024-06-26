#include <iostream>
using namespace std;
main()
{
    int value = 10;
    int n[value];
    for (int x = 0 ; x<value ; x++)
    {
        cout<<"enter the no";
        cin>>n[x];

    }
    int smallest = n[0];
    for (int y = 0 ; y<value ; y++)
    {
        if (n[y] < smallest)
        {
            smallest = n[y];

        }
    }
    cout<<smallest;
}