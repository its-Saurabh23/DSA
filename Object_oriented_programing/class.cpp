#include<iostream>
using namespace std;

class Smartphone{

public:
string model;
int year_of_manufacture;
bool _5g_support;

//constructor

Smartphone(string model_string,int manufacture,bool _5g_){
    model = model_string;
    year_of_manufacture = manufacture ;
    _5g_support = _5g_;

}
//method 
void display(){
 cout<<"Model : "<<model<<endl;
 cout<<"Year of Manufactoring : "<<year_of_manufacture<<endl;
 cout<<"5g Support : "<<_5g_support<<endl;
}

};

int main(){
  // creating objects of samrtphone class
  Smartphone iphone("Iphone 11",2019,false);
  Smartphone redmi("redmi note 11 pro",2021,true);
  Smartphone oneplus("oneplus nort",2020,true);

  //accessing class variable
  int iphnoe_manufacturign_date = iphone.year_of_manufacture;
  int redmi_support_5g = redmi._5g_support;
  string oneplus_model = oneplus.model;

  //calling the method on object 
  iphone.display();
  redmi.display(); 
  oneplus.display();
  
    return 0;
}