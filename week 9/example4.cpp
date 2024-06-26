#include <iostream>
using namespace std;
main()
{
    int size =5;
    int n[size];
    for (int x=0 ; x<size ; x++)
    {
        cout<<"enter the no ";
        cin>>n[x];

    }
    for (int y =0 ; y<size ; y++)
    {
        cout<<n[y]<<endl;
    }
}