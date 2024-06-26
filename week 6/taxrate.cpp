# include <iostream>
# include <cmath>
using namespace std;
float calculate (char type , float price);
main()
{
    char type ;
    float price , tax ;
    cout<<"enter the type of vechiles";
    cin>>type;
    cout<<"enter the price of vechiles";
    cin>>price;
    tax = calculate (type , price);
    cout<<"the price after the tax is added"<<tax;    
}
float calculate (char type , float price)
{
    float taxamount , finalamount;
    if (type =='M')
    {
       taxamount = price * 0.06;
    }
    else if (type =='E')
    {
        taxamount = price*0.08;
    }
     else if (type =='S')
    {
        taxamount = price*0.10;
    }
     else if (type =='V')
    {
        taxamount = price*0.12;
    }
     else if (type =='T')
    {
        taxamount = price*0.15;
    }
    finalamount=taxamount + price;
    return finalamount;









}