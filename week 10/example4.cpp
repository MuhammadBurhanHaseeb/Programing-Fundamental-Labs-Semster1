#include <iostream>
using namespace std;
float discount_value(int code , int price , int item_no);
main()
{
   int code , price ,item_no;
   float result;
   cout<<"enter the code ";
   cin>>code;
   cout<<"enter the price ";
   cin>>price;
   cout<<"enter the item_no ";
   cin>>item_no;
   result = discount_value( code ,  price ,  item_no);
   cout<<result;


}
float discount_value(int code , int price , int item_no)
{
    int d_price;
    int code_array[] ={1,2,3,4,5,6};
    float discount_array[] = {.25 , .44, .55 ,  .58 , .66 , .22};
    for (int x = 0 ; x<6 ; x++)
    {
        if (code == code_array[x])
        {
          d_price = price * discount_array[x] *item_no ;

        }
    }
    
     return d_price;
}