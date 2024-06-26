# include <iostream>
using namespace std;
void esterik();
main()
{
  esterik();
}
void esterik()
{
    for (int y=1 ; y<10;y++)
    {
        for (int x=1 ; x<=y;x++ )
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}