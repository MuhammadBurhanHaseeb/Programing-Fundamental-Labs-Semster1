#include <iostream>
using namespace std;
int size = 5;
int roll_no[]={1,2,3,4,5};
int marks[]={12,14,33,43,66};
int check_highest();
main()
{
    int index;
    index =  check_highest();
    cout<<"the roo no of highest no student is "<<roll_no[index]<<endl;
     cout<<"the highest marks of student roll no "<<marks[index]<<endl;

}
int check_highest()
{
    int index = 0, highest = 0;
    for (int x =0 ; x<size ; x++)
    {
        if (marks[x] > highest)
        {
            highest = marks[x];
            index = x;

        }
    }
    return index;

}
