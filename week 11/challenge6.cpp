#include <iostream>
#include <fstream>
using namespace std;
int count =0;
int value =233;
string indexA[200];
int index_Count=0;
void  checkcount(int countt);
void linecheck(string line);
main(){
   string line;

   fstream total;
   total.open("english.txt", ios::in);
   while (!(total.eof()))
   {
   
   getline(total,line);
  linecheck(line);
   }
   total.close();
}
 void linecheck(string line){
   for(int x=0; line[x] != '\0';x = x+1){
       if(line[x] != ' '){
         // cout<<line[x];
          indexA[index_Count] = line[x];
          index_Count++;
           count++;
            }
        if(line[x] == ' '){
           // cout<<line[x];
            checkcount(count);
        }
}
}  
  void  checkcount(int countt){
 //  cout<<count;
   if(countt <4){
        for(int i =0; i<index_Count;i++){
        cout<<indexA[i];  
    } 
    cout<<" ";
   }
    index_Count =0;
    count = 0;
} 
