#include <iostream>
using namespace std;
string name_array[] = {"ayesha" , "suman" , "maida" , "allena" , "katrina" };
int ages_array[]={12,13,11,14,15};
int descending();
main()
{
   int large;
   cout<<"arrange the age in descending"<<endl; 
  for (int x = 0 ; x<5 ; x++)
  {
     large =descending();
      cout<<name_array[large]<<"is "<<ages_array[large]<<endl;
      ages_array[large]=-1;
  }

}
int descending()
{
    int y;
    int b = -1;
    int idx;
    for ( y = 0 ; y<5 ; y++)
    {
        if (ages_array[y] > b)
        {
            b = ages_array[y];
            idx = y;
        }
    } 
    return idx;
}