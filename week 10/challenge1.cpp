#include <iostream>
using namespace std;
float average();
 string name_array[]={"umer", "nasseeb", "bhola", "nito" ,"hello"};
  int marks_array[] = {12,13,14,15,16};
  int size;
main()
{
    float result;
     size = sizeof(marks_array)/sizeof(marks_array[0]);
    result =  average();
    cout<<result;

}
float average()
{
    float average;
    int sum =0;
    for (int x =0 ; x<5 ; x++)
    {
       sum = sum + marks_array[x];
    }
    average = sum / size;
    return average;
}