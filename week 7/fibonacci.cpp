#include <iostream>
# include <cmath>
using namespace std;
void fibonacci (int length);
main()
{
    int n;
    cout<<"enter th length";
    cin>>n;
    fibonacci ( n);


} 
void fibonacci (int length)
{
    int n1 =0 , n2=1 , next;
    cout<<n1<<","<<n2;
    cout<<",";
    for (int x =1 ; x< length -1 ;x++ )
    {
        next = n1 +n2;
        cout<<next;
        n1=n2;
        n2=next;
    }
}
