#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *p1 , int *p2);
main()
{
int *p1 , *p2;
   int a , b;
   a=10;
   b=20;
   p1 = &a;
   p2 = &b;
swap(p1 , p2);
cout << *p1<<endl;
cout<<*p2<<endl;
}
void swap(int *p1 , int *p2)
{
    int t;
    t = *p1;
    *p1 = *p2;
     *p2 = t;    


}    
