#include <iostream>
using namespace std;
main()
{
    string n ;
    int count =0;
    cout<<"enter the string";
    cin>>n;
    for (int x = 0 ; n[x]!='\0';x++)
    {
        if (n[x]=='a' || n[x]=='e'|| n[x]=='i'|| n[x]=='o'|| n[x]=='u')
        {
            count = count + 1;
        }

    }
    cout<<count;
}