#include <iostream>
using namespace std;
main()
{
    int num;
    int value = 10;
    int n [value];
    for (int x=0 ; x<value; x++)
    {
        cout<<"enter the no";
        cin>>n [x];

    }
    cout<<"enter the scalar no ";
    cin>>num;
    for (int j = 0 ; j<value ; j++)
    {
        int a = n[j] * num;
        cout<<a;
    }

}