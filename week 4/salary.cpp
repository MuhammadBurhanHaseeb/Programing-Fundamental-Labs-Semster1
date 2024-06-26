#include <iostream>
using namespace std;
main()
{
 int aliSalary,priceLaptop,advanceSalary,advanceSalary50,month,remain;
 cout<<"enter the salary of ali";
 cin>>aliSalary;
 cout<<"enter the price of laptop";
 cin>>priceLaptop;
 cout<<"enter the month";
 cin>>month;
 advanceSalary=(aliSalary*50)/100;
 advanceSalary50=advanceSalary*month;
 if(advanceSalary50<priceLaptop)
 {
  cout<<"you can not buy the lapotop with your advance salary"<<endl;
  remain= priceLaptop-advanceSalary50;
  remain=remain/advanceSalary;
  cout<<"you can buy the laptop with advance salary of"<<remain<<" month "<<endl;
  }
 if(advanceSalary50>=priceLaptop)
 {
 cout<<"yo can buy the laptop";
}
 

 
 
}