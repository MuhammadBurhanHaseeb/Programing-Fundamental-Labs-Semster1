#include <iostream>
#include <cmath>
using namespace std;
void printTable(int no);
main()
{
int no1,no2,no3;
cout<<"enter the no1";
cin>>no1;
printTable( no1);
cout<<"enter the no2";
cin>>no2;
printTable( no2);
cout<<"enter the no3";
cin>>no3;
printTable( no3);




}
void printTable(int no)
{
    for (int x=1 ;x<=10;x++ )
    {
        int table = no *x;
        cout<<table<<endl;
    }
}