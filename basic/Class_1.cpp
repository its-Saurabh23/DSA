#include<iostream>
using namespace std;

class Hero{
//    properties
private:
int health;
int *name; 
 public:
 char level;


 Hero(){
    cout<<" simple constructor call"<<endl;
    name = new char[100];
 }
 
// Parameterizsed Constructor 
Hero (int health){
    cout <<"this->"<<this<<endl;
    this->health = health;
}

 void print (){
    cout<<level<<endl;
 }
 int getHealth(){
    return health;
 }

 char getLevel(){
    return level;
 }
 void setHealth(int h){
    health = h;
 }
 void setLevel(char ch){
    level = ch;
 }


void setName(char name[]){
    strcpy (this->name,name)

  }     

};

int main(){


Hero suresh;







//   cout<<"Hii" <<endl;
 
//  Hero tt;

// // object created statically;
// Hero ramesh(10);
// cout<<"Adrees of ramesh"<<&ramesh<<endl;
// ramesh.getHealth();
// // object created dynamicaly;

// Hero *h = new Hero(10);

// //   cout<<"Hello"<<endl;
  return 0;
}