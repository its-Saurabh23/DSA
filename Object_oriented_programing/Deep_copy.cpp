#include<bits/stdc++.h>
using namespace std;
class box{

private:
int length;
int *breadth;
int height;

public:
box(){
    // Deep copy storage 
    breadth = new int;
}

void set_values(int a,int b,int c){

length = a;
*breadth = b;
height  = c;
}
void show_data(){
    cout<<"Lenght = "<<length<<endl<<
    "Breadth = "<<breadth<<endl<<"Height "
    <<height<<endl;
}
// Parameterized Constructor for implementing Deep copy

box(box& sample){
    length = sample.length;
    breadth = new int;
    *breadth = *(sample.breadth);
    height = sample.height;
}
~ box(){
    delete breadth;
}
};

int main(){
box B1;
// set Dimension
B1.set_values(5,10,15);
B1.show_data();

box B2 = B1;
B2.show_data();
    return 0;
}