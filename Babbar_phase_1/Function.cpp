#include<iostream>
using namespace std;


// int a,b;
// cin>>a >>b;
// int ans = 1;
// for (int i = 1; i <=b; i++)
// {
//     ans = ans * a;
// }
//  cout<<ans <<endl;
// int power(){
//     int a,b;
//     cin>>a>>b;
//     int ans = 1;
//     for (int i = 1; i <=b; i++)
//     {
//         ans =ans*a;
//     }
//     return ans; 
    
// }



// bool isEven(int a)
// {
//     if (a&1)
//     {
//     return 0;
//     }
//     return 1;
    
// }

// int factorial(int  n )
// {
//     int fact =1;
//     for (int  i = 1; i <=n; i++)
//     {
//         fact =fact*i;
//     }
//     return fact;
    
// }

// int nCr(int n,int r){
//     int num =factorial(n);
//     int deno = factorial(r) *factorial(n-r);
//     int ans = num/deno;
//     return ans;
// }

// // Function Singnature
// void printCounting(int n){
// // functon body
// for (int i = 1; i <=n; i++)
// {
//     cout<<i<<" "<<endl;
// }


// }

bool isPrime(int n){
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){
int n;
cin>>n;
if (isPrime(n))
{
    cout<<"Is a Prime no. "<<endl;
}
else cout<<"Not aprime number "<<endl;

// int n;
// cin>>n;
// printCounting(n);

// int n,r;
// cin>>n >>r;
// cout<<"Anser is  "<<nCr(n,r)<<endl;









// int a,b;
// cin>>a >>b;
// int ans = power();
// cout<<" Asnwer is "<<ans<<endl; 
// int num ;
// cin>>num;
// if (isEven(num))
// {
//     cout<<"Number is Even "<<endl;
// }
// else{
//     cout<<"Number is Odd "<<endl;
// }


return 0;
}