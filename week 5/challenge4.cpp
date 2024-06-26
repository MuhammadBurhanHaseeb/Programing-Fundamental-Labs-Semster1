#include<iostream>
using namespace std;
main()
{
    string day , month;
    float purchase_amount , discount , payable_amount;
    cout<<" enter the month";
    cin>>month;
    cout<<" enter the day";
    cin>>day;
    cout<<" enter the purchase_amount ";
    cin>>purchase_amount;
    if(month=="october" || month=="march" || month=="august"){
    if(day=="sunday" )
    { 
       discount = (purchase_amount *10)/100;
    payable_amount=purchase_amount - discount;
     cout<<" the amount after the discount"<<payable_amount;
     }
    }
    else if(month=="november" || month=="december"){
        if(day=="monday")
        {
        discount=(purchase_amount*5)/100;
        payable_amount=purchase_amount -discount;
        cout<<" the price after the discount"<<payable_amount;
        }
    }
    else
       cout<<"the price without discount"<<purchase_amount;
}      
