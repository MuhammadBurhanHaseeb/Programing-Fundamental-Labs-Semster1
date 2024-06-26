#include <iostream>
#include<fstream>
using namespace std;
main()
{
   
    string l;
    fstream f;
    f.open("english.txt" , ios :: app);
    getline(cin,l);
    f <<endl<< l;
    f.close();
}