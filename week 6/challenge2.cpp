# include <iostream>
# include <cmath>
using namespace std;
double quadratic(int a , int b , int c);
double quadratic1 (int a2 ,int b2, int c2);
main()
{
  int a , b, c  ;
  double quad , quad1;
  cout<<"enter the no a ";
  cin>>a;
  cout<<"enter the no b ";
  cin>>b;
  cout<<"enter the no c ";
  cin>>c;
  quad = quadratic(a,b,c);
  cout<<"the quadratic value the equation ="<<quad<<endl;
  quad1 = quadratic1(a,b,c);
  cout<<"the quadratic value the equation ="<<quad1;

}
double quadratic(int a , int b , int c)
{
    double power = pow(b , 2);
    double diff = 4*a*c;
    double value = power - diff;
    double squareroot = sqrt(value);
    double numerator = -b + squareroot;
    double result = (-b + squareroot)/(2*a);
    return result;
}
double quadratic1(int a2 , int b2 , int c2)
{
    double power = pow(b2 , 2);
    double diff = 4*a2*c2;
    double value = power - diff;
    double squareroot = sqrt(value);
    double numerator = -b2 - squareroot;
    double result = (-b2 - squareroot)/(2*a2);
    return result;
}
