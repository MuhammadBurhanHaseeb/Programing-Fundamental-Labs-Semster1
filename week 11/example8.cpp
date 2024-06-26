#include <iostream>
#include<fstream>
using namespace std;
main()
{
    float l;
    fstream f;
    f.open("float.txt" , ios :: in);
    f >> l;
    cout<<l;
    f.close();
}