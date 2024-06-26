#include<iostream>
#include<conio.h>
using namespace std;
void display(int *p);
main()
{
   int a ;
 cout<<"enter the no:";
 cin>>a;
 display(&a);

}
void display(int *p)
{
    cout<<*p;
}