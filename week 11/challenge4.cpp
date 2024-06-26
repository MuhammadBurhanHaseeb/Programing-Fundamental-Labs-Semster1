#include <iostream>
#include<fstream>
using namespace std;
void student_detail();
void storefile(string sname, int sage, string schooln , int matric, string cname , int fsc , int ecat );
main()
{
   
   student_detail();
}
void student_detail()
{
string S_name ,school_name , C_name;
int S_age , matric , fsc , ecat;
cout<<"enter the name of the student";
cin>>S_name;
cout<<"enter the age of the student";
cin>>S_age;
cout<<"enter the name of the school";
cin>>school_name;
cout<<"enter the marks of the matric";
cin>>matric;
cout<<"enter the name of the college";
cin>>C_name;
cout<<"enter the marks of the fsc";
cin>>fsc;
cout<<"enter the marks of the ecat";
cin>>ecat;
storefile(S_name,S_age,school_name,matric,C_name , fsc, ecat);

}
void storefile(string sname, int sage, string schooln , int matric,string college  , int fsc , int ecat )
{
fstream f ;
f.open("student_data.txt" , ios :: out);
f<<"student name"<<"\t"<<"student age"<<"\t"<<"school name"<<"\t"<<"matric marks"<<"\t"<<"college name"<<"\t"<<"fsc marks"<<"\t"<<"ecat marks"<<endl;
f<<sname<<"             \t"<<sage<<"       \t"<<schooln<<"      \t"<<matric<<"       \t"<<college<<"        \t"<<fsc<<"      \t"<<ecat<<endl;
}