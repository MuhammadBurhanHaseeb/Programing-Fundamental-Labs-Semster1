#include <iostream>
#include<fstream>
using namespace std;
main()
{
    char a;
    int count = 0;
    char l;
    fstream f;
    f.open("english.txt" , ios :: in);
    cout<<"enter the character which frequency is to be find";
    cin>>a;
    while (!(f.eof()))
    {
     f >> l;
     if (l == a)
     {
      count++;
     }
    }
    cout<<"total no characters   "<<count;
    f.close();
}