#include <iostream>
using namespace std;
void myFunction (int array[3][3] , int r , int c );
int array[3][3] = {{1,2,3},{2,5,6},{3,8,9}};
int count =0;
main()
{
    
    int r,c;
    cout<<"enter the row id";
    cin>>r;
    cout<<"enter the colun id ";
    cin>>c;
   // cout<<array;
    myFunction( array , r , c);

}
void myFunction (int array[3][3] , int r , int c )
{


    for (int x=0 ; x<3  ; x++)
    {
       if ( array[r][x] == array[x][c])
       {
           count ++;
       }
    }
    if (count == 3)
    {
        cout <<"row and coloum are match";
    }
}