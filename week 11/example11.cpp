#include <iostream>
#include<fstream>
using namespace std;
main()
{
    int count =0;
    string l;
    fstream f;
    f.open("english.txt" , ios :: in);
    
    while (!(f.eof()))
    {
      getline(f,l);
      count++; 
    }
    cout<<"number of lines  "<<count;
    f.close();
}