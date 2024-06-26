#include<iostream>
using namespace std;
main()
{
    int sum =0 ;
    int cars [5][5] = {{10,7,12,10,4},{18,11,15,17,2},{23,19,12,16,14},{7,12,16,0,2},{3,5,6,2,1}};
for (int i = 0 ; i<5 ; i++)
{
    sum = sum + cars[2][i];
}
cout<<"total no of NISSAN cars in the carraige"<<" "<<sum;
}