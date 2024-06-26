#include <iostream>
using namespace std; 
int checker (int no ,int j);
int numb =0;
main()
{
    int result;
    int value = 9;
    int n[value];
    for (int x = 0 ; x<value; x++)
    {
        cout<<"enter the no";
        cin>>n[x];
    }
    for (int j =1 ; j<10 ; j++)
    {
        result = checker (n[numb],j);
        cout<<result;
    }
    
}
int checker (int no ,int j)
{
    if (j == no)
    {
        numb=numb +1;
    }
    else 
    {
    return no;
    }
}