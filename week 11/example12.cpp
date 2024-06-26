#include <iostream>
#include<fstream>
using namespace std;
main()
{
    int count = 0;
    char l;
    fstream f;
    f.open("english.txt" , ios :: in);
    
    while (!(f.eof()))
    {
     f >> l;
      count++;
    }
    cout<<"total no characters   "<<count;
    f.close();
}