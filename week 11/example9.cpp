#include <iostream>
#include<fstream>
using namespace std;
main()
{
    char l;
    fstream f;
    f.open("english.txt" , ios :: in);
    
    while (!(f.eof()))
    {
      f>>l;
      cout<<l;
       
    }
    f.close();
}