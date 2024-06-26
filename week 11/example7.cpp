#include <iostream>
#include<fstream>
using namespace std;
main()
{
    int  l;
    fstream f;
    f.open("integer.txt" , ios :: in);
    f >> l;
    cout<<l;
    f.close();
}