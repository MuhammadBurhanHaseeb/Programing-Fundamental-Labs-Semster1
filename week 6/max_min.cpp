# include <iostream>
# include<cmath>
using namespace std;
int maximum(int a , int b , int c , int d );
int minimum(int a1 , int b1 , int c1 , int d1 );
main()
{
    int a,b,c,d,max,min;
    cout<<"enter the no 1";
    cin>>a;
    cout<<"enter the no 2";
    cin>>b;
    cout<<"enter the no 3";
    cin>>c;
    cout<<"enter the no 4";
    cin>>d;
    max =maximum(a,b,c,d);
    cout<<"the maximum no is ="<<max;
    min=minimum(a,b,c,d);
    cout<<"the minimum value of no is"<<min;




}
int maximum(int a , int b , int c , int d )
{
    if (a>b && a>c && a>d)
    {
        return a;
    }
    else if (b>a && b>c && b>d)
    {
        return b;
    }
    else if (c>a && c>b && c>d)
    {
        return c;

    }
    else if (d>a && d>b && d>c)
    {
        return d;
    }
}
int minimum(int a1 , int b1 , int c1 , int d1 )
{
  if (a1<b1 && a1<c1 && a1<d1)
    {
        return a1;
    }
    else if (b1<a1 && b1<c1 && b1<d1)
    {
        return b1;
    }
    else if (c1<a1 && c1<b1 && c1<d1)
    {
        return c1;

    }
    else if (d1<a1 && d1<b1 && d1<c1)
    {
        return d1;
    }  
}
