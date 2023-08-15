#include<bits/stdc++.h>
using namespace std;

class student{

int age;
char* name;

public:
student(int age,char*names){

    this->age = age;

    // shallo copy 
    this->name = name;
    // here we are putiing the same value 
    // we are just coping the refernce 

}

};

class student{
    int age;
    char* names;
    student(int age,char names){
        this->age;

        // deep copy 
        this->names = new char[strlen(names)+1];
        strcpy(this->names,names);
        // created a new array and copied
    }

};

int main(){
    return 0;
}