#include<iostream>
using namespace std;


unsigned int SetBit(unsigned int n){
     unsigned int count = 0;
    while(n){
     
     count += n&1;
     n >>=1;
    }
 return count;
 }

int main(){
unsigned int n ;
cout<<"Enter a number "<<endl;
cin>>n;

cout<< "Number of Set Bit = "<< SetBit(n)<<endl;
    return 0;
}
