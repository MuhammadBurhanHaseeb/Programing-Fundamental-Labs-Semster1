#include <iostream>
using namespace std;
bool myFunction (int array[3][3]  );
int array[3][3] = {{1,2,3},{2,5,6},{3,8,9}};
int count =0;
int countt =0;
int counttt =0;
main()
{
    
    int r,c;
    int result;
    //cout<<"enter the row id";
    //cin>>r;
   // cout<<"enter the colun id ";
    // cin>>c;
   // cout<<array;
   result =  myFunction( array );
   if (result == 1)
   {
       cout<<"match";
   }

}
bool  myFunction (int array[3][3] )
{

   // cout<<"e";
    for (int x=0 ; x<3  ; x++)
    {
       for(int y= 0 ; y<3 ; y++)
        {
           if (array[0][y] == array[y][x])
           {
               count ++;
           }
           if (array[1][y] == array[y][x])
           {
               countt ++;
           }
           if (array[2][y] == array[y][x])
           {
               counttt ++;
           }
           
        }
    }
    //cout<<count;
    if (count == 3)
    {
        cout <<" 1 , row and coloum are match";
        return 1;
    }
    /*else 
     if (count == 5)
    {
        cout <<" 2 , row and coloum are match";
    }
    else  if (count == 9)
    {
        cout <<" 3 , row and coloum are match";
    }*/
}