#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int count =0;
void linecheck(string line);
main(){
   string line;

   fstream total;
   total.open("english.txt", ios::in);
   while (!total.eof())
   {
   
   getline(total,line);
   linecheck(line);
   }
   cout<<count;
}
void linecheck(string line){
   for(int x=0; line[x] != '\0';x = x+1){
       if(line[0]!= 'T' && line[0] != 't'){
         count++;
         break;
       }
   }

}
