#include <iostream>
using namespace std;
void find_cgpa(int a );
main()
{
    int no;
    cout<<"enter the no";
    cin>>no;
    find_cgpa(no);

}
void find_cgpa(int a )
{
  float roll_no[] = {1,2,3,4,129};
  float cgpa[]  = {2.55 , 3.55 , 4.55 ,5.55,4.2};
  for (int x =0  ; x<5 ; x++)
  {
      if (a == roll_no[x])
      {
          cout<<"the rool no "<<a<<"  "<<"the cgpa is "<<cgpa[x];
      }
  }
}