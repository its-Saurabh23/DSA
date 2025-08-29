#include<bits/stdc++.h>
using namespace std;
int power(int num, int n){
  
    if(n == 0){
        return 1;
    }
    return 2* power(num,n-1);
}

int main(){
    // 2 power 3
    // 2*fun(2*2),  == 2*4 = 8
    // 2* fun(2*1); // 2*2 = 4
    // 2*fun(2*0); ==> 2

    int num,n;
    cout<<"Enter a number to calculate the 2's Power"<<endl;
    cin>>num;
    cout<<"Enter the power"<<endl;
    cin>>n;
    int result = power(num,n);

   cout<<"Answer "<<result<<endl; 
}