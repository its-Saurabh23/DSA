#include<iostream>
#include<math.h>
using namespace std;

int main(){
float n;
cin>>n;
float ans =0;
float i = 0;
while (n !=0)
{
    float bit = n & 1;
    ans = (bit * pow(10, i)  ) + ans;
    n =  n >>1;
    i++;
}
cout<<"Answer "<<ans<<endl;

// Binary TO decimal Program;

// int n;
// cin>>n;
// //  n= 101
// int ans = 0;
// int i = 0;
// while (n!=0)
// {
//     int  digit = n%10;
//     if (digit == 1)
//     {
//         ans = ans + pow(2,i);
//     }
//     n =n/10;
//     i++;

// }
 cout<<ans<<endl;

    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    int num ;
    std::cin >> num;
    int ans = 0; int rem; int mul = 1;
    while(num>0){
            //   getting the single value 
        rem = num%10;
            // reducing the value 
        num = num/10;
                        // adding previous ans 
        ans = mul * rem +  ans;
        
        mul = mul *2;
    }
std::cout << ans << std::endl;
    return 0;
}