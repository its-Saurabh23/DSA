#include<iostream>
using namespace std;
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int  i = 1;
// for (; ; )
// {
//     if (i <= n)
//     {
//         cout<<i<<endl;  
//     }
//     else{
//         break;
//     }
    
//     i++;  
// }



// for (int a = 0,b=1 ,c=2; a >= 0 && b>=1 &&c>=2; a--,b--,c--)
// {
//     cout<<a<<" "<<b<<" " <<c<<endl;
// }

// cin>>n;
// int sum = 0;
// for (int i = 1; i <=n; i++)
// {
//   sum += i;
// }
// cout<<sum;
 
// int a = 0;
// int b =1;
// cout<<a<<" " <<b<<" ";
//  for (int i = 1; i<= 10; i++)
//  {
//     int nextNumber = a+b;
//     cout<<nextNumber<<"  ";

//     a = b;
//     b = nextNumber;
//  }
 
//  int n;
//  cout<<"Enter a Number to check Wether a Number is Prime or not "<<endl;
//  cin>>n;

// bool isPrime = 1;
//  for (int  i = 2; i<n; i++)
//  {
//     if (n%i == 0)
//     {
//         isPrime = 0; 
//         break;
//     }
//  }
//     if (isPrime == 0)
//     {
//         cout<<"Not a Prime Number"<<endl; 
//     }
//     else{
//         cout<<"Prime number"<<endl;
//     }
    
    
 


// for (int i = 0; i <5; i++)
// {
//     cout<<"Hii"<<endl;
//     cout<<" Hwllo"<<endl;
//     continue;
//     cout<<"Reply"<<endl;
// }


// for (int i = 0; i <=5; i--)
// {
//     cout<<i<<" ";
//     i++;
// }


// for (int i = 0; i <=15;  i +=2)
// {
//     cout<<i <<" ";
//     if (i&1)
//     {
//         continue;
//     }
//     i++;
// }


// for (int i = 0; i <5; i++)
// {
//  for (int j = i; j <=5; j++)
//  {
//     if (i+j==10)
//     {
//         break;
//     }
//     cout<<i<<" "<<j<<endl;
//  }
 
// }

// int a=1;
//    cout<<a<<endl;
// if (true)
// {
//     int b =5;
//     cout<<b<<endl;
// }
// int b= 3;
// cout<<b<<endl;
// // int b =3;
// // cout<<b<<endl;
// int i =2;
// for (; i < 6; i++)
// {
//     cout<<"Hi"<<endl;
// }

// 123 add ,Prooduct, subtraction of product-addition
// int funciton(int n){
// int product = 1;
// int sum = 0;
// int answ;
// while (n!=0)
// {
//     int digit = n%10;
//     product = product*digit;
//     sum = sum+digit;
//     n=n/10;
//     answ = product-sum ;
// }
// //  = product-sum ;
// return  answ;

// }


int  main (){

// int n;
// cin>>n;
// int count =0;
// while (n!=0)
// {
//      if (n&1)
//      {
//         count= count++;
//      }
//      n >> 1;
// }
// cout<<count<<endl;

int n;
cin>>n;

while (n!=0)
{
    int reminder = n%10;
    cout<<reminder;
    n=n/10;
}




















// int k;
// cin>>k;
// int val =  funciton(k);
// cout<<val<<endl;














    return 0;
}