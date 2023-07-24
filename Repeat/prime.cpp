#include<iostream>
using namespace std;

int main()
{
   int n ;
   cout<<"Enter a Number to check wether a Number is prime or not"<<endl;
   cin>>n;

 bool isprime = 1;
   for(int i = 2; i<n/2; i++){
        if(n%i == 0){
            isprime = 0;
            break;
        }
   }
   if(isprime == 0){
    cout<<"Not a Prime Nuumber "<<endl;
   }
   else{
    cout<<"Prime Number"<<endl;
   }

    return 0;
}