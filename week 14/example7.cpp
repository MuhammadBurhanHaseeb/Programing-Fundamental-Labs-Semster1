#include<iostream>
#include<conio.h>
using namespace std;

int change(int &a);
main()
{
  int b ;
  cout<<"enter the no";
  cin>>b;
  change(b);
  cout<<b;  
}
int change(int &a)
{
    a = 60;
}  
