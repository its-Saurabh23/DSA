#include<iostream>
using namespace std;

class Hero{
 
//  Properties

// public:
private:
int  health;
// private:
public:
Hero(){
   cout<<" Default contructor call "<<endl;
}
 static int timeToComplete;

// parameterised Constructor

// Hero (int health){
//    cout<<"This -> "<<this<<endl;
//    this ->health = health;
// }

char level;
void print(){
    cout<<level<<endl;
    cout<<"Health "<<this->health<<endl;
    cout<<"level "<<this->level<<endl;
} 

// copy constgructor
Hero(Hero&  temp){
   this->health = temp.health;
   this->level = temp.level;
}
 

 int getHealth(){
    return health;
 }
 char getLeve(){
    return level;
 }
 void setHEalth(int h,char name){
    // if(name == "A"){
    health =h;
    // }
    
 }
 void setLevel(char ch){
    level=ch;
 }

~Hero(){
   cout<<"Destructor call "<<endl;
}

static int random(){
 return timeToComplete;
}

};

int Hero::timeToComplete = 5;
int main(){

cout<<Hero::random()<<endl;
   // cout<<Hero::timeToComplete<<endl;
 

   // ststic
// Hero a;
// dyanmic 
// Manullay destructor call

// Hero *b = new Hero();
// delete b;
  return 0;
}

/*
Hero s();
s.print();

// copy contructor..
Hero r(s);
r.print();


Hero ramesh(10);
 cout<<"Address of ramesh "<<&ramesh<<endl;

// /dynamic allocation 

Hero *h =new Hero();

 
// /dynamic allocation 
Hero *b = new Hero;
// cout<<"Level is "<<(*b).level<<endl;
cout<<"Level is  "<<b->getHealth()<<endl;




// creation of object 
Hero  ramesh;
cout<<"Size of ramesh is  "<<sizeof(ramesh)<<endl;
cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
// ramesh.health =70;
// ramesh.setHEalth(70);/
ramesh.level ='A';

cout<<"health is "<<ramesh.getHealth()<<endl;
cout<<"Level is "<<ramesh.level<<endl;
// cout<<"size of "<<sizeof(ramesh)<<endl;

*/
