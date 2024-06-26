#include <iostream>
using namespace std;
main()
{
 int amount,discount,price;
 cout<<"enter the amount";
 cin>>amount;
 
 if(amount<=5000)
 {
  discount=(amount*5)/100;
  price=amount-discount;
  cout<<"when the amount is less than or equal to 5000"<<price;
  }
 if(amount>5000)
 {
  discount=(amount*10)/100;
  price=amount-discount;
  cout<<"when amount greater then the 5000"<<price;
 }
}