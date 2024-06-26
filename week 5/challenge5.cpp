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
    if(month=="october" ){
    if(day=="sunday" )
    { 
       discount = (purchase_amount *10)/100;
    payable_amount=purchase_amount - discount;
     cout<<" the amount after the discount"<<payable_amount;
     }
    }
    else if(month=="november"){
        if(day=="thursday")
        {
        discount=(purchase_amount*10)/100;
        payable_amount=purchase_amount -discount;
        cout<<" the price after the discount"<<payable_amount;
        }
    }
    else
       cout<<"the price without discount"<<purchase_amount;
}      
