# include <iostream>
using namespace std;
void esterik();
main()
{
    esterik();
}
void esterik()
{
   
    for(int x=1 ; x<=5 ; x++)
    {
      for (int y =1 ; y<=x ; y++ )
      {
        cout<<"*";
      }
      cout<<"\n";
    }
     for(int x=1 ; x<=5 ; x++)
    {
      for (int y =5 ; y>=x ; y-- )
      {
        cout<<"*";
      }
      cout<<"\n";
    }
}