#include <iostream>
using namespace std;
main()
{
    int count=0;
    string n;
    cout <<"enter the string";
    cin>>n;
    for (int x = 0 ; n[x]!='\0' ; x++)
    {
        count = count +1;
    }
    for (int y = count ; y>=0 ; y--)
    {
        cout<<n[y];
    }
}