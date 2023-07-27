#include<iostream>
#include<math.h>
using namespace std;

int main(){
cout<<"Enter decimal value"<<endl;
    int n;
    cin>>n; 
   float ans = 0;
   int i = 0;
    while (n !=0);
    {
      int digit = n&1;

      ans = (digit*pow(10,i))+ans;
      n = n>>1;
      i++;
    }
    cout<<"Binary Number will be "<<ans<<endl;
     
    return 0;
}