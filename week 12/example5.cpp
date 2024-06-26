#include<iostream>
using namespace std;
int convertColor(string color);
main()
{
    int indx;
    string color;
    int sum =0 ;
    int cars [5][5] = {{10,7,12,10,4},{18,11,15,17,2},{23,19,12,16,14},{7,12,16,0,2},{3,5,6,2,1}};
    
  cout<<"enter the colur";
  cin >> color;
   indx = convertColor(color);
   if (indx >=0)
   {
   for (int i= 0 ;i <5 ; i++)
   {
     sum = sum + cars[i][indx];
   } 
   cout<<"total no of cars on the input index by the user"<<" "<<sum;
   }
   else if (indx == -1)
   {
       cout<<"you enter the wrong index";
   }
}
int convertColor(string color)
{
    int index ;
    if (color == "red")
    {
        index = 0;
    }
    else if (color == "black")
    {
        index = 1;
    }
     else if (color == "brown")
    {
        index = 2;
    }
     else if (color == "blue")
    {
        index = 3;
    }
     else if (color == "gray")
    {
        index = 4;
    }
     else 
    {
        index = - 1;
    }
    return index;
}