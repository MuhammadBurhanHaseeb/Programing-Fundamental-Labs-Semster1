#include<iostream>
#include<conio.h>
using namespace std;
void square (int *p);
main()
{
   int x= 2;
   square (&x);
   cout<<x; 
}
void square (int *p)
{
    *p = *p  * *p;
    
}