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
laptop inputData();
laptop displayData( laptop b);
main()
{
   laptop c = inputData();
   displayData (c);
}
laptop  inputData()
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
    return record ;

}
laptop displayData( laptop b)
{
     cout <<" manufature " << b.manufacture <<endl;
    cout <<" model type " << b.modelType<<endl;
    cout <<" processor " << b.processor<<endl;
    cout <<" ram " << b.ram<<endl;
    cout <<" hardrive " << b.hardDrive<<endl;
    cout <<" generation " << b.generation<<endl;
    cout <<" price " << b.price<<endl;
    
}