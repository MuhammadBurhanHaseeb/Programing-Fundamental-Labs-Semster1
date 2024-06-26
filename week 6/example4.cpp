# include <iostream>
# include <cmath>
using namespace std;
double height (double no , double base );
main()
{
    double no , base, h;
    cout<<"enter the no";
    cin>>no;
    cout<<"enter the base";
    cin>>base;
    h =height(no,base);
    cout<<"the of the tree ="<<h;


}
double height(double no , double base )
{
    double angle = no / 57.2958;
    double height = tan(angle)*base;
    return height;
}
