#include<iostream>
using namespace std;
main()
{
    int no1 , no2 , no3 ;
    cout<<"enter the no1";
    cin>>no1;
    cout<<" enter the no2";
    cin>>no2;
    cout<<" enter the no3";
    cin>>no3;
    if(no1==no2 && no1==no3)
    cout<<"3";
    else if (no2 ==no1 && no2==no3)
    cout<<"3";
    else if(no3==no1 && no3==no2)
    cout<<"3";
    else if ((no1==no2 && no1!=no3 ) || (no1==no3 && no1!=no2))
    cout<<"2";
    else if((no2==no1 && no2!=no3) || (no2==no3 && no2!=no1))
    cout<<"2";
    else if((no3==no1 && no3!=no2) || (no3==no2 && no3!=no1))
    cout<<"2";
    else if (no1!=no2 && no1!=no3)
    cout<<"0";
    else if( no2!=no1 && no2!=no3)
    cout<<"0";
    else if(no3!=no1 && no3!=no2)
    cout<<"0";
    
    

                                        
}      
