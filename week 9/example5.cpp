#include <iostream>
using namespace std;
main()
{
    int sum =0;
    int count =0;
    int value=5;
    int n[value];
    for (int x=0 ; x<value ; x++ )
    {
       cout<<"enter the no ";
        cin>>n[x];
    }
    for (int y =0 ; y<value ; y++)
    {
        
        sum = sum + n[y];
        count = count + 1;
    }
    float average = 0;
    average = sum / count  ;
    cout <<sum <<endl;
    cout<<average;
}