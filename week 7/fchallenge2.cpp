#include <iostream>
#include <cmath>
using namespace std;
int frequencyChecker(int no1 , int no2);
main()
{
int no1 ,no2,result;
cout<<"enter the no1";
cin>>no1;
cout<<"enter the no2";
cin>>no2;
result= frequencyChecker( no1 ,  no2);
cout<<result;


}
int frequencyChecker(int no1 , int no2)
{
   int count =0;
  for (int x= no1 ; x>0 ; x= x/10)
     
  {
      
     int mode = x%10;
      if (mode == no2)
      {

          count = count +1;
      
         
      }
      
     
       
  }
   return count ;

}