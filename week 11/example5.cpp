#include <iostream>
#include<fstream>
using namespace std;
main()
{
    float cgpa;
    string roolno;
    string name;
    string grade;
    
    fstream file;
    file.open("result.txt" , ios :: out);
    cout<<"enter the rool no";
    cin>>roolno;
    cout<<"enter the name";
    cin>>name;
    cout<<"enter the cgpa";
    cin>>cgpa;
    cout<<"enter the grade";
    cin>>grade;
    file<<"ROLL NUMBER"<<"\t"<<"NAME"<<"\t"<<"CGPA"<<"\t"<<"GRADE"<<endl;
    file<<roolno<<"    \t"<<name<<"   \t"<<cgpa<<"   \t"<<grade<<endl;
    file.close();
}