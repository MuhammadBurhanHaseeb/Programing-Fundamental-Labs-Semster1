# include <iostream>
#include <cmath>
using namespace std;
void   caseLetter(char a);
main()
{
    char a;
    cout<<"enter the alphabet";
    cin>>a;
    caseLetter(a);


}
void  caseLetter(char a )
{
    if (a =='a')
    {
    cout<<"the letter is small case"; 
       
    }
       else if (a =='A')
       {
    cout<<"the alphabet is upper case";
       }



    
}