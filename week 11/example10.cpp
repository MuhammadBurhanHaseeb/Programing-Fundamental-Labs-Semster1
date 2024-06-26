#include <iostream>
#include<fstream>
using namespace std;
main()
{
    string l;
    fstream f;
    f.open("english.txt" , ios :: in);
    
    while (!(f.eof()))
    {
      getline(f,l);
      cout<<l<<endl;  
    }
    f.close();
}