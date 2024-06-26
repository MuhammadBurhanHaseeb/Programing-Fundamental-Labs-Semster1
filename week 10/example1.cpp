#include <iostream>
using namespace std;
void parallel_arrays();
main()
{
    parallel_arrays();
}
void parallel_arrays()
{
    int array1[]={1,2,3,4,5,6};
    int array2[]={11,12,13,14,15,16};
    for (int j =0 ; j<6 ; j++)
    {
        cout<<"array1["<<j<<"]"<<" "<<array1[j]<<" "<<"array2["<<j<<"]"<<" "<<array2[j]<<endl;
    }
}
