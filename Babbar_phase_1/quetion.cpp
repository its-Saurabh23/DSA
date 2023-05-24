#include<iostream>
#include<math.h>
using namespace std;
int main(){

// int n;
// cin>>n;
// int ans =0;
// while (n!=0)
// {
//     int digit = n%10;
       
// //    if ((ans>INT16_MAX/10)|| (ans<INT16_MIN/10))
// //    {
// //     return 0;
// //    }
//     ans =(ans*10) +digit;
//     n =n/10;
// }

// cout<<ans <<endl;

// Compliment of Number;
// int n ;
// cin>>n;
// int mask = 0;
// int m = n;
// int ans;
// if (n==0)
// {
//     ans = 1;
// }
//  while (m!=0)
//   { 
//       mask = (mask <<1)|1;
//       m =m>>1;
//   }
//    ans =(~n) & mask;
// cout<<ans<<endl;



// 2 Ki poer


int n;
cin>>n;
int ans ;
for (int i = 0; i <=30; i++)
{
    ans = pow(2,i); 
    if (ans == n)
{
    cout<<"True"<<endl;
}

    return 0;
}