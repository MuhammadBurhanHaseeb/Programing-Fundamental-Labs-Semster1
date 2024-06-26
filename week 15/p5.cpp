#include <iostream>
using namespace std;
void print (int array[] , int size);
main()
{
    int array[3][3] = {{1,2,3}
                      ,{4,5,6}
                      ,{7,8,9}};
    print(array[2],3);
    print(array[1],3);
    print(array[0],3);
}
void print (int array[] , int size)
{
   for (int x= 0 ; x<size ; x++)
   {
       cout << array[x];
   }
   cout<<endl;
}