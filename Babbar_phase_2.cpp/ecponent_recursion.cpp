#include<bits/stdc++.h>
using namespace std;


int power(int a,int b){

    // Base case
    if(b == 0){
        return 1;
    }

    if(b==1){
        return a;
    }


    // R.R
       int ans  = pow(a,b/2);
        
        // if b is even
       if(b%2 ==0){
        return ans*ans;
       } 
       else{
        // odd
        return a*ans*ans;
       }
}


int main(){

int a,b;
cin>>a>>b;

int ans = power(a,b);
  cout<<"Answer is = "<<ans<<endl;

    return 0;
}