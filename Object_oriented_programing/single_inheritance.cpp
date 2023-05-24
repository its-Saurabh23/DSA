#include<bits/stdc++.h>
using namespace std;

class Animal{

   public:
   int age;
   int weoght;
   public:
   void speak(){
    cout<<"Speaking "<<endl;
   }

};

class Dog: public Animal{

};

// Miulti level inheritance

class German:public Dog{

};

int main(){
German g;
g.speak();

// Dog d;
// d.speak();
// cout<<d.age<<endl;

    return 0;
}