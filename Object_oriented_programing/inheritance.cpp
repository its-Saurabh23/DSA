#include<bits/stdc++.h>
using namespace std;

class Human {
 public:
  int heigth;

  int weight;
  int age;
 
  public:
  int setAge(){
    return this->age; 
  }

  void setweght(int w){
    this->weight = w;
  }
};
// Child class 
class Male :public Human {
public:
string color ;
void sleep(){
    cout<<"Male is sleeping "<<endl;
}
int getHeight(){
    return this->heigth;
}
};

int main(){
    Male m1;

//    cout<< m1.heigth<<endl;
// cout<<m1.getHeight()<<endl;
    /*
Male obj;
cout<<obj.age<<endl;
cout<<obj.weight<<endl;
cout<<obj.heigth<<endl;

cout<<obj.color<<endl;
obj.setweght(84);
cout<<obj.weight<<endl;

obj.sleep();
*/
    return 0;
}