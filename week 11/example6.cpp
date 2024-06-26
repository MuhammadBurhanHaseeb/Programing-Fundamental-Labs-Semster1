#include <iostream>
#include<fstream>
using namespace std;
main()
{
    char l;
    fstream f;
    f.open("character.txt" , ios :: in);
    f >> l;
    cout<<l;
    f.close();
}