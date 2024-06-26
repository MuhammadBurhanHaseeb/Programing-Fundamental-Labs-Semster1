#include <iostream>
#include<fstream>
using namespace std;
main()
{
string l ;
l = "ajmal and naseeb ki ----";
fstream f ;
f.open("data.txt" , ios :: out);
f << l;
f.close();
}