#include <iostream>
using namespace std;
void inputdata();
void addrecord(string manufacture,string modelType, float processor,int ram,int hardDrive , int generation , double price);
void display();
struct  laptop 
  {
    string manufacture ;
    string modelType ;
    float processor;
    int ram;
    int hardDrive;
    int generation;
    double price;
    laptop * next;

  };
  laptop *getlastrecord (laptop *temp);
  laptop *printrecord(laptop *p);
  
   laptop *head = NULL;
  
main()
{
    inputdata();
    inputdata();
    display();
}
void inputdata()
{
     string manufacture ;
    string modelType ;
    float processor;
    int ram;
    int hardDrive;
    int generation;
    double price;
    cout <<"enter the manufature ";
    cin >> manufacture ;
    cout <<"enter the model type ";
    cin >> modelType ;
    cout <<"enter the processor ";
    cin >> processor;
    cout <<"enter the ram ";
    cin >> ram;
    cout <<"enter the hardrive ";
    cin >>  hardDrive;
    cout <<"enter the generation ";
    cin >> generation;
    cout <<"enter the price ";
    cin >>  price;
    addrecord( manufacture,modelType, processor, ram,hardDrive ,  generation ,  price);
}
void addrecord(string manufacture,string modelType, float processor,int ram,int hardDrive , int generation , double price)
{
  laptop *record = new laptop ; 
  record->manufacture = manufacture;
  record->modelType = modelType;
  record->processor = processor;
  record->ram = ram;
  record->hardDrive = hardDrive ;
   record->generation = generation ;
  record->price = price;
  record->next = NULL;
  //cout <<record->next;
  if (head == NULL)
  {
      head = record;
  }
  else
  {
    laptop *temp = getlastrecord(head);
    temp->next = record;
    //  cout<<temp->next <<endl;
  }
   // cout<<head<<endl;
 

}
laptop *getlastrecord (laptop *temp)
{
    while (temp-> next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}
laptop *printrecord(laptop *p)
{
    cout <<" manufature " << p->manufacture <<endl;
    cout <<" model type " << p->modelType<<endl;
    cout <<" processor " << p->processor<<endl;
    cout <<" ram " << p->ram<<endl;
    cout <<" hardrive " << p->hardDrive<<endl;
    cout <<" generation " << p->generation<<endl;
    cout <<" price " << p->price<<endl;
    cout<<endl;
    cout<<endl;
}
void display()
{
  laptop *temp = head;
  while (temp != NULL)
  {
      printrecord(temp);
    temp = temp->next;
  }
}