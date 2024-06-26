#include<iostream>
#include<conio.h>
using namespace std;
int getaverage(int *array , int size );
int array[5]={1,2,3,4,5};
main()
{
    int size;
    float result;
    
    size = sizeof(array)/sizeof(int);
   result = getaverage( array  , size );
   cout <<result;
}
int getaverage(int *array , int size)
{
    int sum = 0;
     float average = 0;
 for (int x=0 ; x<size ; x++)
 {
     
     sum = sum + array[x];
     average = sum / size;
 }
 return average;
}