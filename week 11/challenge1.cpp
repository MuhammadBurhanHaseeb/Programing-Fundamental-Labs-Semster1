#include <iostream>
#include<fstream>
using namespace std;
int frequency(char a);
 int count = 0;
  fstream f;
   char l;
main()
{
    int result;
    char a;
   
    cout<<"enter the no which you want to find the location in the file";
    cin>>a;
    result = frequency(a);
    cout<<" the frequency of that no no which is enetered by the user  ";
    cout<<result;
    f.close();
   
}
int frequency(char a)
{
f.open("english.txt" , ios :: in);
 while (!(f.eof()))
    {
        
     f >> l;
     cout<<l;
     if (l == a)
     {
      break;

     }
       count++;
    }// end while 
   return count;
}