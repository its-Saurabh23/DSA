#include<bits/stdc++.h>
using namespace std;


/*int factorial(int n ){ 
    // base case
     if(n ==0)return 1;
     
    //  int smallProblem =  factorial(n-1);
    //  int biggerProblem = n*smallProblem;
     return n*factorial(n-1) ;
}


int power(int n){
  //base case 
  if(n==0)return 1;

// recuresive relation. 
//   int smallerProblem = power(n-1);
//   int biggerProblem = 2* smallerProblem;

  return  2*power(n-1);
}

void count(int n){

if(n ==0)return;
 
    // recursive realtion
     count (n-1);
     cout<<n<<endl;
}
*/
int fib(int n ){
    // base condition
   if(n<=1){
    return n;
   }

  return fib(n-1)+fib(n-2) ;  
 

}
int main(){


int n ;
cin>>n;
fib(n);
int ans = fib(n);
cout<<ans<<endl;
 /*
int n;
cin>>n;
cout<<endl;
count(n);


int n;
cin>>n;
int ans = power(n);
cout<<ans<<endl;
int n ;
cin>>n;
int ans = factorial(n);
cout<<ans<<endl;
*/


} 