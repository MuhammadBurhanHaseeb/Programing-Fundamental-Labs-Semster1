#include <iostream>
# include <cmath>
using namespace std;
 int sum();
main()
{
    int result;
  result= sum();
cout<<result;
} 
int sum ()
{
    int sum =0;
    for (int x =1 ; x<=5 ; x++)
    {
        sum = sum + x;
       
    }
    return sum;
     
}