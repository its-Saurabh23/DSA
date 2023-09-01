#include<iostream>
using namespace std;
 class Base{
   public:
   virtual void print(){
    cout<<"Base class Function "<<endl;
   }
 };

class Derived :public Base{
   public:
   void print(){
    cout<<"Derived class  Funciton "<<endl; 
   } 
 
};
int main(){
    Derived d1;

    // pointer of base type that points to d1
    Base* base1 = &d1;

    // call member fucction of deriv3ed class
    base1->print(); 
    return 0;
}