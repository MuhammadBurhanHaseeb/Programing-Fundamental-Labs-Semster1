#include <iostream>
using namespace std;
void myFunction (int array[3][3] , int c );
int array[3][3] = {{1,2,3},{2,5,6},{3,8,9}};
int count =0;
main()
{
    
    int r,c;
    //cout<<"enter the row id";
    //cin>>r;
    cout<<"enter the colun id ";
    cin>>c;
   // cout<<array;
    myFunction( array , c);

}
void myFunction (int array[3][3] ,  int c )
{


    for (int x=0 ; x<3  ; x++)
    {
       for(int y= 0 ; y<3 ; y++)
        {
           if (array[x][y] == array[y][c])
           {
               count ++;
           }
           
        }
    }
    if (count == 3)
    {
        cout <<" 1 , row and coloum are match";
    }
    else 
     if (count == 5)
    {
        cout <<" 2 , row and coloum are match";
    }
    else  if (count == 9)
    {
        cout <<" 3 , row and coloum are match";
    }
}