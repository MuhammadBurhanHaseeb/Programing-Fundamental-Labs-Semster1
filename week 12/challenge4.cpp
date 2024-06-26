#include<iostream>
#include <conio.h>
#include<fstream>
using namespace std;
void suser(string line , int field);
const int value =15;
string array[value][value];
main()
{
    int field = 0;
  fstream f;
  string line;
  f.open ("football.txt" , ios :: in);
  while (!f.eof())
  {
  getline(f, line);
  suser (line , field);
  field++;
  
  }
  f.close();
 /* for (int i = 0 ; i<5 ; i++)
{
    for (int j = 0 ; j<5 ; j++)
    {
      cout<<array[i][j]<<"\t";
    }
     cout<<endl;
}*/

}
void suser(string line , int field)
{
for (int i = 0 ; line[i]!='\0' ; i++)
{
 array[field][i]  = line[i];
}
}