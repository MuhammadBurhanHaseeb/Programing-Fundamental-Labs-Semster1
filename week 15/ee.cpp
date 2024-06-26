#include <iostream>
using namespace std;
struct nametype
{
    string first;
    string last;
};
struct coursetype
{
    string name;
    int callnum;
    int credits;
    char grade;

};
struct studenttype 
{
  nametype name;
  double gpa;
  coursetype course;   
};
studenttype *student ;
studenttype classlist[100];
coursetype course;
nametype  name ;
main()
{
    cout<<"ccc";
   student->gpa = 6.7;
   cout<< student->gpa;
   cout<<"dzds";
   student->name.last="jhb,vv";
   cout<<"ss";
   cout<< name.last;
   classlist[1].name="burhan"; // classlist pointer ne studenttype ke structure ko point kia hai phir us mai se name pointer ne nametype ke structure ko point kia hai megr us structure mai age 2 members hain name pointer ne tu assign nahi kiya ke data kis member mai save ho is liye error arha hai
   classlist[0].callnum = 0; // call num tu studenttype ke structure mai hai hi nahi
  student->name = classlist[10].name; 
  course  = classlist[10];
  course = name;
  course.name= "db.hkb";
  cin<< classlist[0];
  for (int x=0 ; x<100 ; x++)
  {
  classlist[x].course = course;
  }
  cout<<course;//.callnum;
 cout << classlist[0].course.callnum;
 classlist.name.last=" ";

course.credits =studenttype.course.credits;
course.credits =classlist[0].course.credits;
 
} 