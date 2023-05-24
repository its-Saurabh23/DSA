#include<bits/stdc++.h>
using namespace std;

class Animal{

   public:
   int age;
   int weoght;
   public:

   void bark(){
    cout<<"Barking "<<endl;
   }

};

class Human {
    public:
    string color;
    public:
    void speak(){
        cout<<"Specaking "<<endl;
    }
};

// Multiple inheritance

class Mybride:public Animal,public Human{

};

int main(){

Mybride obj1;
obj1.speak();
obj1.bark();

    return 0;
}