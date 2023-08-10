// cosntructor overloading is basically overloading the constructor 
// same as function overloading we pass differernt differernt 
// parameter in construcotr to overload it

#include<iostream>
using namespace std;

class smartphone{
    // data member(properties)

    string model;
    int year_of_manufacture;
    bool _5g_supported;

    public:
    // cosntructor with 0 parameter
    smartphone(){
        model = "unknown";
        year_of_manufacture = 0;
        _5g_supported = false; 
    }

    // constructor with 2 parameter
    smartphone(string mode_sting,bool _5g_){
        model = mode_sting;
        _5g_supported = _5g_;
    }

    // construcotr with 3 parameter

    smartphone(string model_string,int manufature,bool _5g_){
        // initialising the data member

        model = model_string;
        year_of_manufacture = manufature;
        _5g_supported = _5g_;
    }
};

int main(){
    // creating object of smartphone class
    
    // using constructor with 0 parameter
    smartphone unknown;
    
    //  using constructor with 2 parameter
    smartphone redmi("Note 7 Pro",false);

    // using cosntructor with 3 parameter
    smartphone iphone("ipnone 11",2019,false);
    return 0;
}