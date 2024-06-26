#include<iostream>
using namespace std;
main()
{
    string day;
    float purchase_amount , discount , payable_amount;
    cout<<" enter the day";
    cin>>day;
    cout<<" enter the purchase_amount ";
    cin>>purchase_amount;
    if(day=="sunday" && purchase_amount>=5000)
    { 
       discount = (purchase_amount *10)/100;
    payable_amount=purchase_amount - discount;
     cout<<" the amount after the discount"<<payable_amount;
     }
    else if(day!="sunday" && purchase_amount>5000)
     {
         discount=(purchase_amount*5)/100;
         payable_amount=purchase_amount - discount;
         cout<<" the amount after the discount"<<payable_amount;
     }
}  