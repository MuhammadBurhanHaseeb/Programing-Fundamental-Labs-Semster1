#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int *p , a  , c;
    a = 20 ; 
    c =  80;
    p = &a;
    cout<<"value of a ::"<< *p<<endl;
    p = &c;
     cout<<"value of c ::"<< *p<<endl;

}