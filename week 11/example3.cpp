#include <iostream>
#include<fstream>
using namespace std;
main()
{
    char l;
    l = 'b';
    fstream f;
    f.open("character.txt" , ios :: out);
    f << l;
    f.close();
}