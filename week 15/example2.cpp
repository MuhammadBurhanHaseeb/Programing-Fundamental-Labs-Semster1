#include <iostream>
using namespace std;
struct  laptop 
{
    string manufacture ;
    string modelType ;
    float processor;
    int ram;
    int hardDrive;
    int generation;
    double price;

} ;
void inputData();
main()
{
 inputData();
}
void inputData()
{
    laptop record;
    cout <<"enter the manufature ";
    cin >> record .manufacture ;
    cout <<"enter the model type ";
    cin >>record . modelType ;
    cout <<"enter the processor ";
    cin >>record . processor;
    cout <<"enter the ram ";
    cin >>record . ram;
    cout <<"enter the hardrive ";
    cin >> record . hardDrive;
    cout <<"enter the generation ";
    cin >>record . generation;
    cout <<"enter the price ";
    cin >> record . price;

}