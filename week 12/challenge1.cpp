#include<iostream>
using namespace std;
int array[3][3];
main()
{
    int sum =0;
for (int i = 0 ; i<3 ; i++)
{
    for (int j = 0 ; j<3 ; j++)
    {
      cout<<"enter the no in array";
      cin >> array[i][j];

    }
}

for (int i = 0 ; i<3 ; i++)
{
    for (int j = 0 ; j<3 ; j++)
    {
    
      cout<< array[i][j] <<"\t";
      sum = sum + array[i][j];

    }
    cout<<endl;
}
cout<<"total sum of the elements "<<" "<<sum;
}