#include <iostream>
using namespace std;
main()
{
    string nam;
    int x  = 26;
    char n[x];

    for (int y = 0 ; y<x ; y++)
    {
        cout<<"enter the alphabet";
        cin>>n[y];
    }
    cout<<"enter the string ";
    cin>>nam;
    for (int j =0 ;nam[j]!='\0';j++ )
    {
          for (int z=0 ; n[z]!='\0';z++)
          {
              if (nam[j]==n[z])
              {
                  cout<<n[z+1];
              }
          }
    }

}