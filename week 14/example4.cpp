#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a =10;
    int *p;
    p = &a;
    a = 20;

    cout<< "update value :"<<*p<<endl;
    cout<<p; 

}