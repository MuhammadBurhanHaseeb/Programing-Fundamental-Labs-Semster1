#include<iostream>
using namespace std;
main()
{
    string p1 , p2 ;
    cout<<"enter the p1";
    cin>>p1;
    cout<<" enter the p2";
    cin>>p2;
    if(p1=="rock" && p2=="paper")
    {
        cout<<"the p2 wins the game";
    }  
        if(p1=="rock" && p2=="scissors")
    {
        cout<<"the p1 wins the game";
    } 
        if(p1=="rock" && p2=="rock")
    {
        cout<<"the game is draw";
    }  
        if(p1=="paper" && p2=="paper")
    {
        cout<<" the game draw";
    }   
        if(p1=="paper" && p2=="rock")
    {
        cout<<"the p1 wins the game";
    }  
        if(p1=="paper" && p2=="scissors")
    {
        cout<<"the p2 wins the game";
    } 
        if(p1=="scissors" && p2=="paper")
    {
        cout<<"the p1 wins the game";
    } 
        if(p1=="scissors" && p2=="rock")
    {
        cout<<"the p2 wins the game";
    } 
        if(p1=="scissors" && p2=="scissors")
    {
        cout<<"the game draw";
    }                                
}      
