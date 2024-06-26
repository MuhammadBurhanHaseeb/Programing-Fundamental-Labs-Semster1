#include<iostream>
using namespace std;
main()
{
    string ticket ;
    float price,weight,add;
    cout<<"enter the ticket category";
    cin>>ticket;
    cout<<" enter the prirce";
    cin>>price;
    cout<<" enter the weight";
    cin>>weight;
    if(ticket=="business_class" ){
    if(weight==40 && price==15000 )
    { 
     cout<<" "<<price;
     }
     else if(weight>40 && price==15000)
     {
        add=weight-40;
        add=add*1000;
        add=price+add;
        cout<<" after add the weight orice"<<add;
     }
 }
    else if(ticket=="economy" ){
        if(weight==25 && price==8000)
        {
        cout<<" "<<price;
        }
        else if(weight>25 && price==8000){
            add=weight-25;
            add=add*500;
            add=price+add;
            cout<<"the price after the increase in weight "<<add;
        }
    }
    
}      
