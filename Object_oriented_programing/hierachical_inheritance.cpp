#include<bits/stdc++.h>
using namespace std;

class A{
public:
void func1(){
    cout<<"Inside  Funciotn 1 "<<endl;
}
};
class B:public A{
    public:
    void func2(){
        cout<<"Inside Funciton 2 "<<endl;
    }

};

class C: public A{
    void func3(){
       cout<<" Inside Funciton 1"<<endl; 
    }
};

int main(){

A  obj1;
obj1.func1();

B obj2;
obj2.func1();
obj2.func2();


 
    return 0;
}