#include <iostream>
using namespace std;
main()
{
 int num1,num2;
 string num3;
 cout<<"enter the no 1";
 cin>>num1;
 cout<<"enter the no 2";
 cin>>num2;
 cout<<"when we add the operation is adding"<<endl;
 cout<<"when we subtract the operation is subtraction"<<endl;
 cout<<"when we multiply the operation is multiplication"<<endl;
 cout<<"when we division the operation is division"<<endl;
 cin>>num3;
 if(num3=="add")
 {
  cout<<"now we subtract the no"<<num1-num2;
 }
 if(num3=="sub")
 {
  cout<<"now we add the no"<<num1+num2;
 }
 if(num3=="mult")
 {
  cout<<"now we divide the no"<<num1/num2;
 }
 if(num3=="div")
{
 cout<<"now we multiply the no"<<num1*num2;
}

}