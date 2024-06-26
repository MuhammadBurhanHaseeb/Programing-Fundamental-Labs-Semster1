#include <iostream>
#include <cmath>
using namespace std;
void happy(string no);
main()
{
string no;
cout<<"enter the no";
cin>>no;
happy(no);
}
void happy(string no)
{
  while(no == "y")
  {
      cout<<"i am happy"<<endl;
      cout<<"enter teh no";
      cin>>no;
  }
  
  cout<<"exists";  
  

}