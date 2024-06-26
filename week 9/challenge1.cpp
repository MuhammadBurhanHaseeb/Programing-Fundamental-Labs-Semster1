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
    for (int y =9 ; y >= 0 ; y--)
    {
        cout<<n[y]<<",";
    }
}