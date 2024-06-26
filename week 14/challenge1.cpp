#include<iostream>
#include<conio.h>
using namespace std;
main()
{
 int a ;
 cout<<"enter the no:";
 cin>>a;
 int *p;
 p = &a;
cout << p;
cout<<endl;
cout<<*p;
}