#include<iostream>
using namespace std;
int main(){
// int n;
// cin>>n;
// int row =1;
// while (row<=n)
// {
//     // space print
//     int space = n-row ;
//     while (space)
//     {
//         cout<< " ";
//         space =space-1;
//          }
//     //satr print
//     int col =1; 
//     while (col<=row)
//     {
//         cout<<"*";
//         col =col+1;
//     }
//     cout<<endl;
//     row =row +1;
// }
 

// int n;
// cin>>n;

// int row = 1;

// while (row<=n)
// {
//       int num =n+1-row;
//       while (num)
//       {
//        cout<<"*";
//        num = num-1;
//       }
//       cout<<endl;
//     row = row+1;
// }

// int n;
// cin>>n;
// int row=1;
// while (row<=n)
// {
//      //Printing of star
//      int star = n+1-row;
//      while (star)
//      {
//         cout<< "*";
//         star = star-1;
//      }
//       cout<<endl;
//     //   White spaces print
//     int col =1;
//     while (col<=row)
//     {
//         cout<<" ";
//         col =col+1;
//     }
//     row = row+1;
// }

// int n ;
// cin>>n;
//  int row =1;
//  while (row<=n)
//  {
//    int num = n + 1-row; 
//    int  value = row - 1 + 1;
//    while (num)
//    {
//     cout<<value;
//      num =  num-1;
//    }
//    cout<<endl;
// //    White space 
// int col = 1;
// while (col<=row)
// {
//     cout<<" ";
//     col = col + 1;
// }
//    row = row +1; 
// }



// int n;
// cin>>n;
// int row = 1;
// while (row<=n)
// {
//     // white spaces
//     int sapce = n - row;
//     while (sapce)
//     {
//         cout<<" ";
//         sapce = sapce-1;
//     }
//     // print number
//     int col = 1;
//     int value = row - 1 + 1;
//     while (col<=row)
//     {
//         cout<< value ;
//         col  = col +1;
//     }
//     cout<<endl;
//     row = row + 1;
// }


// int n ;
// cin>>n ;
// int row = 1;
// while (row<=n)
// {
//     int num = row -1 + 1;
//     int col= row -1 +1;
//     while (col<=n)
//     {
//         cout<<num;
//         num= num+1;
//         col=col+1;
//     }
//     cout<<endl;
//     //  white spaces
//     int space = row -1;  
//     while (space)
//     {
//         cout<< " ";
//         space =  space-1;
//     }
//     row = row + 1;
// }




// int n;
// cin>> n;
// int row = 1;
// while (row<=n)
// {
//     // Print spacce
//      int num = n - row;
//      while (num)
//      {
//         cout<<" ";
//         num = num -1;
//      }
//     // Number Print
//     int col = 1;
   
//    int value = row - 1 + 1;
//     while (col<=row)
//     {
         
//         cout<<value;
//         value = value + 1;
//         col = col+1;
//     }
//     cout<<endl;
//     row = row + 1;
// }


// int n;
// cin>>n;

// int row = 1;
// while (row<=n)
// {
//     // Print white spaces..
//     int num = n-row;
//     while (num)
//     {
//         cout<<" ";
//         num = num -1;
//     }
//     int col = 1;
//     int value = 1;
//     while (col<=row)
//     {
//         cout<<" "<<value;
//         value = value + 1;
//         col = col+1;
//     }
//     //   Second triangle
//     int num2 = row-1;
//     while (num2)
//     {
//         cout<<" "<< num2;
//         num2 = num2-1;
//     }

//     cout<<endl;
//     row = row + 1;
// }



int n;
cin>>n;
int row = 1;

while (row<=n)
{
    int value = n-row+1;
    int num = 1;
    while (value)
    {
        cout<<" "<<num;
        num=num+1;
        value = value-1;
    }


    // Printing star;
    int col = 1;
    // int temp = 2;
    int star = (row-1)*2;
    while (col<=star)
    {
        cout<<"*";
        col = col+1;

    }
    // temp = temp + 2;

// another number triangle
int i=n-row + 1;
int value2 = n-row + 1;
while (value2)
{
    cout<<" "<<i;
    i=i-1;
    value2=value2-1;
}


    cout<<endl;
    row = row+1;
}























   return 0;
}