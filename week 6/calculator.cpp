# include <iostream>
# include <cmath>
using namespace std;
double calculator (int a , int b , char op);
main()
{
    char op;
    cout<<"enter the operator";
    cin>>op;
    double a , b , result;
    cout<<"enter the no 1";
    cin>>a;
    cout<<"enter the no 2";
    cin>>b;
    result= calculator (a , b , op);
    cout<<"the result of the "<<result;

}
double calculator (int a , int b , char op)
{
    if (op == '+')
    {
        double add = a + b;
        return add;
    }
    else if (op =='-')
    {
        double sub =a - b;
        return sub;
    }
    else if (op =='*')
    {
        double mul=a*b;
        return mul;
    }
}
