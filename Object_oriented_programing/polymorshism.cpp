// polymorphism

// fucntion overlading

#include<bits/stdc++.h>
using namespace std;

// class Test{
//     public:
//   void Print(){
//       std::cout << "I am the fucntion without the argumnent" << std::endl;
//   }   
   
//   void Print(int a){
//       cout<<"I am the fucntion with the argumnent"<<endl;
//   }
//   void Print(double a ,double b){
//       cout<<"I am the fucntion with 2 argumnents"<<endl;
//   }
// };

// int main(){
//     Test obj;
    
//     obj.Print();
//     obj.Print(1);
//     obj.Print(2.1,4.1);
// }

//  operator overlading;

// class Complex {
  
//   private:
//   int real,img;
  
//   public:
  
//   Complex(int r=0,int m=0){
//       real = r;
//       img = m;
//   }
  
//   Complex operator + (Complex const &obj){
//       Complex res;
      
//       res.img = img + obj.img;
//       res.real = real + obj.real;
      
//       return res;
//   }
  
//   void Print(){
//       cout<< real<< " "<< "i"<<img<<endl;
//   } 
  
// };

// int main(){
    
//     Complex c1(12,17),c2 (6,7);
//     // Complex c2 (6,7);
//     Complex c3 = c1 +c2;
    
//     c3.Print();
//     return 0;
// }

// fucntion overriding 

class BaseClass {
    public:
    virtual void print(){
        cout<<"I am the function of Base class"<<endl;
    }
    
    virtual void display(){
        cout<<"I am also the funtion of base class"<<endl;
    }
};

class DruiveClass : public BaseClass {
    void print (){
        cout<<"I am the funtion of the drive class"<<endl;
    }
    
    void display(){
        cout<<"I am the funtion of dricve class "<<endl;
    }
};

int main(){
    
    BaseClass *base;
    DruiveClass obj;
     
    base = &obj;
    
    base->print();
    base->display();
    return 0;
}