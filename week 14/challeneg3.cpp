#include<iostream>
#include<conio.h>
using namespace std;
int passArrays(int array[] , int array2[] , int size);
int array [5] = {1,2,3,4,5};
int array2 [5] = {6,7,8,9,10};
int array3[10];
main()
{
    int size ;
    size = sizeof(array3)/sizeof(int);
   passArrays(array , array2 , size ) ;
   for(int i = 0 ; i<size ; i++)
   {
       cout<<array3[i]<<" ";
   }
}
int passArrays(int array[] , int array2[] , int size )
{
   
 for (int x=0; x<5 ; x++)
 {
 
    array3[x] = array[x];
    

    
 }
   
    int co=5;
for (int x=0; x<5 ; x++)
{
   array3[co] = array2[x];
   co++;
 
}   
}

