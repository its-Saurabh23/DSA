#include<iostream>
#include<math.h>
using namespace std;
int main(){

int n, k;
int finalResult;
int fact =1;
int fact1 =1;
int fact3 =1;
int result;
cout<<" Enter n "<<endl;
cin>>n;
cout<<"Enter k "<<endl;
cin>>k;
for (int i = 1; i <=n; i++)
    {
    fact = fact*i; 
    }
   
    result =  n-k;
    for (int i = 1; i <=result; i++)
    {
         fact1 =fact1*i;
    }
    //  cout<<fact1<<endl;
    for (int i = 1; i <=k; i++)
    {
        fact3 = fact3*i;
    }

     finalResult =  fact/(fact1 * fact3);
     cout<<"Binomial Coefficient "<<finalResult<<endl;
    return 0;

}