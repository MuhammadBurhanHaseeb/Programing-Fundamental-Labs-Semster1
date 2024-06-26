#include<iostream>
#include <conio.h>
using namespace std;
bool checkDiagonal();
bool checkIdentity();
const int value = 10;
int array[value][value];
  int no;
main()
{

    cout<<"enter the array size";
    cin>>no;
    cout<<"enter the no in array";
    for (int i = 0 ; i<no ; i++)
{
    for (int j = 0 ; j<no ; j++)
    {
      cin >> array[i][j];

    }
}
if (checkDiagonal())
{
    if (checkIdentity())
    {
    cout<<"identity";
    }
    else 
    {
        cout<<"not identity";
    }
}
}
bool checkDiagonal()
{
    int count ;
    for (int i = 0 ; i<no ; i++)
    {
        if (array[i][i] == 1)
        {
            count++;
        }
    }
   // cout<<count;
    // getch();
    if (count == no)
    {
        return 1;
    }
    else{
        return 0;
    }
}
bool checkIdentity()
{
    int count =0;
    for (int i = 0 ; i<no ; i++)
{
    for (int j = 0 ; j<no ; j++)
    {
     if (array[i][j] == 0)
     {
        count ++;
      //   cout<<count;
        //  getch();
     }
    }
}
int a;
    a = no - 1;
   // cout<<a;
    // getch();
    // cout<<count;
    // getch();
    if (a*no == count)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}