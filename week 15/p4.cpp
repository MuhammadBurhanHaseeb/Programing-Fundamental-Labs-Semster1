#include <iostream>
using namespace std;
main()
{
    int betta[3][3];
    for (int x=0 ; x<3 ; x++)
    {
        for(int y = 0 ; y<3 ; y++)
        {
            betta[x][y] = x*y;
            cout <<betta[x][y]<<endl;
        }
    }
}