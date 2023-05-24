#include<bits/stdc++.h>
using namespace std;

class B {
    public:
    int a;
    int b;
    
    public:
    int add(){
        return a+b;
    }

     /*  void operator+ (B &obj){
     
       int vlaue1 = this-> a;
       int value2 = obj.a;
        cout<<"output "<<value2 - vlaue1 <<endl;
  
   cout<<"Heloo "<<endl;
    }
    void operator() (){
        cout<<"main Backet " <<this->a <<endl;
    }  */
};

class Animal {

public:
void speak(){
    cout<<"Speaking "<<endl;
}
};

class Dog :public Animal{
    public:
    void speak(){
        cout<<"Bark "<<endl;
    }
};

 

int main(){
 Dog obj;
 obj.speak();
 
/*
B obj1, obj2;

obj1.a = 4;
obj2.b = 7;
obj1();

obj1 + obj2;
*/
    return 0;
}