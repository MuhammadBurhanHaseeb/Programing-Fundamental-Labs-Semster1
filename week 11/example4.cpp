#include <iostream>
#include<fstream>
using namespace std;
main()
{
    float l;
    l = 2.222;
    fstream f;
    f.open("float.txt" , ios :: out);
    f << l;
    f.close();
}