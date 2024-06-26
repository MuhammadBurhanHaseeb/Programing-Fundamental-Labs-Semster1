# include <iostream>
#include<cmath>
using namespace std;
int age (int a);
main()
{
    int a ;
    cout<<"enter the age of the person";
    cin>>a;
    age( a);

}
int age (int a)
{
    if (a >= 18 )
    {
        cout<<"you eleigible to vote";
    }
        else
        { 
        cout<<"you are not eligible to vote";
        }
    
}
