#include <iostream>
#include<fstream>
using namespace std;
main()
{
    int  l;
    l = 10;
    fstream f;
    f.open("integer.txt" , ios :: out);
    f << l;
    f.close();
}