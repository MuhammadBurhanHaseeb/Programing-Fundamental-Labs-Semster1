#include <iostream>
using namespace std;
 bool findNo(int no);

 int n[10];
main()

{
    int no;
  
    for (int x=0 ; x<10 ; x++)
    {
        cout<<"enter the no";
        cin>>n[x];
    }
    cout<<"enter the number you find";
    cin>>no;
    if ( findNo( no))
    {
        cout<< "the no is present";

    }
    else 
    {
        cout<<"the no is not present";
    }
     

}
 bool findNo(int no)
 {
     for (int y=0 ; y<10 ;y++)
     {
         if (n[y]  == no)
         {
             return 1;

         }
         else 
         {
             return 0;
         }
     }
 }
