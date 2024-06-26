#include <iostream>
using namespace std;
main()
{
     int value = 10;
     int n[value];
    for (int x=0 ; x<10 ; x++)
    {
        cout<<"enter the no";
        cin>>n[x];
    }
    int largest = n[0];
    for (int j = 0 ; j <value ; j++)
    {
        if (n[j] > largest)
        {
            largest = n[j];
        }

    }
    cout<<largest;
}